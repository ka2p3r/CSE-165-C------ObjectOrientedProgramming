// input desired int, output per line all prime less than input 
#include<iostream>
using namespace std; 

int main () {

    int number; 
    cin >> number; 

    for (int i = 2; i < number; i++) {
        bool primeno = true; 
        for (int j = 2; j * j <= i; j ++) {
            if (i%j == 0) {
                primeno = false; 
                break;
            }

        }
        if (primeno == true) {
            cout<<i<<endl;
        }
    }

    return 0; 
}