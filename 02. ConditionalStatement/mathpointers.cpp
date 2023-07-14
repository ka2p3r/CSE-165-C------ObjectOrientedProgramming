//take in two input and perform mathematical operation utiliizng 
// math pointers 
#include<iostream> 
using namespace std;

int main(){

    int fno, sno; 
    cout<<"Please indicate  two numbers: ";
    cin>> fno >> sno; 

    int *r1 = &fno, *r2 = &sno;
    int addopt = *r1 + *r2; 
    int subopt = *r1 - *r2;
    int divdeopt = (float)(*r1)/ (*r2);
    int productopt = (*r1) * (*r2);


    cout << "Add output: " << addopt <<endl;
    cout << "Difference output: " << subopt <<endl;
    cout << "product output: " << productopt <<endl; 
    cout << "Quotient output: " << divdeopt <<endl; 

    return 0;

}