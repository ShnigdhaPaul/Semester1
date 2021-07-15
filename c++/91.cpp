#include<iostream>
using namespace std;
void display(int);
void display(float);
void display(int, double);
int main()
{
    int a=63;
    float b=63.5;
    double c=23.4444;
    display(a);
    display(b);
 display(a,c);
 return 0;
}

void display(int a)

{
cout<<"Integer number:"<<a<<endl;
}

void display(float b)
{




    cout<<"Float number:"<<b<<endl;
}
void display(int a,double c)
{
cout<<"Integer number :"<<a<<endl;
cout<<"Double number:"<<c;


}
