// No.1 Design a program that could take the input of a user and outputs
// its polarity and if odd or even 
#include<iostream>
using namespace std; 

int main(){
    int number; 
    cin >>number; 

    while (number != 0) {
            if(number > 0){
        cout<<"POSITIVE"<<endl;
    } else {
        cout<<"NEGATIVE"<<endl;
    }
    if(number%2 == 0 ) {
        cout<<"EVEN"<< endl;
    } else {
        cout<<"ODD"<< endl;
    }
    cin>>number; 
    }
}