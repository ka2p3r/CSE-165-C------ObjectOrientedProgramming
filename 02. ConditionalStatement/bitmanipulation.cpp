// write a program that takes in a decimal and a position - convert then print out 
// the result in binary format. Use the following code to set, get and clear the number 
// and index position. 

#include <iostream>
#include <bitset>
using namespace std;

int getbit (int n, int index){
    
    return (n & (1 << index)) != 0; 
}

int setbit(int n, int index){

    return(n | (1 << index));
}

int clearbit(int n, int index){
    return (n & ~(1 << index));
}

int main(){
    int n, index;
    cout << "Enter a number and index : ";
    cin >> n >> index;
 
    cout<<"Binary format :" << n << " " <<bitset<8>(n) << endl;
    cout<<"Index of Bit :" << index << " = " <<getbit(n, index) << endl;
    cout << "Binary Representation of " << n << " with the bit at " << index << " set : " << bitset<8>(setbit(n, index)) << endl;
    cout << "Binary Representation of " << n << " with the bit at " << index << " cleard : " << bitset<8>(clearbit(n, index)) << endl;
}