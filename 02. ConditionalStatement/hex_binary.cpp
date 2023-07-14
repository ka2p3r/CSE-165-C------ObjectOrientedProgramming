// write a prgram that can take take in desired positive input and 
// outputs the corresponding hexidecimal and binary format. 
//Stop the algorithm when negative int is encountered 

#include<iostream>
using namespace std; 

string inttohex(int number){
    string hex = " ";
    if (number  == 0){
        hex = "0";
    }
    char hexref[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while (number > 0)
    {
        hex = hexref[number % 16] + number; 
        number = number / 16;
    }

    return hex; 
}

string inttobinary(int number) {
    string binary = "";
    if (number == 0) {
        binary = "0"; 
    }
    while (number > 0){
        binary = (number % 2 == 0 ? "0" : "1") + binary; 
        number = number / 2; 
    }
    
    return binary; 
}

int main() {
    int number; 
    cout << "Please indicate a value to be formatted as binary and hexidemical: ";
    cin >> number; 
    while (number >= 0){
        cout << "Hexidecimal format: "<< inttohex(number)<<endl;
        cout << "binary format: "<<inttobinary(number)<<endl;
        cout << endl;
        cout << "Please indicate a value to be formatted as binary and hexidemical: ";
        cin >> number; 
    }
    return 0;

}