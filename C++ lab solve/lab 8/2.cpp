#include<iostream>
using namespace std;
struct complexadd{

float real;
float imaginary;

};
int main()
{
complexadd num1,num2,temp;
float n1r,n1i,n2r,n2i;
n1r = num1.real;
n1i = num1.imaginary;
n2r = num2.real;
n2i = num2.imaginary;
cout<<"Give us real & imaginary part of 1st complex number"<<endl;
cout<<"Real part:"<<endl;
cin>>n1r;
cout<<"Imaginary part:"<<endl;
cin>>n1i;
cout<<"Give us real & imaginary part of 2nd complex number"<<endl;
cout<<"Real part:"<<endl;
cin>>n2r;
cout<<"Imaginary part:"<<endl;
cin>>n2i;
temp.real = n1r + n2r;
temp.imaginary = n1i + n2i;
cout<<"Add of two complex numbers: "<<temp.real<<" + "<<temp.imaginary<<"i";
return 0;
}
