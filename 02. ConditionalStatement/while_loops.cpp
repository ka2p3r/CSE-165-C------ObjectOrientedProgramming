// Refer to pervious program and consecutively take in int and output polarity 
// and whether odd or even 

#include<iostream>
using namespace std; 

int main(){
    int number; 
    cin >> number; 

    while (number != 0) {
        if (number > 0){
            cout<<"POSITIVE"<<endl; 
        } else {
            cout<<"NEGATIVE"<<endl; 
        }

        if (number %2 == 0) {
            cout <<"EVEN"<<endl;
        } else {
            cout <<"ODD"<<endl; 
        }

        cin>> number;  

    }

    return 0; 
}