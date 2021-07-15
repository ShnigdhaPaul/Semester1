
#include<iostream>
#include<conio.h>
using namespace std;
struct complex
{
float real;
float imaginary;
};
int main()
{
struct complex n1, n2;
struct complex temp;

cout<<"Enter the real part of first complex number:";
cin>>n1.real;
    cout<<"Enter the imaginary part of first complex number:";
cin>>n1.imaginary;
    cout<<"Enter the real part of first complex number:";
    cin>>n2.real;
        cout<<"Enter the imaginary part of first complex number:";
        cin>>n2.imaginary;

temp.real=n1.real+n2.real;
temp.imaginary=n1.imaginary+n2.imaginary;

cout<<temp.real<<"+"<<temp.imaginary<<"i";
}
