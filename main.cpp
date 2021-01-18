/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char op;
    float a,b;
    
    cout<<"Please enter the operration ( +, -, *, /) : ";
    cin>>op;
    
    cout<<"Please Enter 1st number : ";
    cin>>a;
    
    cout<<"Please Enter 2nd number : ";
    cin>>b;
    
    if (op =='+') {
    cout << "Your sum is : " << a+b;}
    
    else if (op =='-') {
    cout << "Your sum is : " << a-b;}
    
    else if (op =='*') {
    cout << "Your sum is : " << a*b;}
    
    else if (op =='/') {
    cout << "Your sum is : " << a/b;}

}
