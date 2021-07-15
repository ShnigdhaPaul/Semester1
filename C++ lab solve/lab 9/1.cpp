#include<iostream>
using namespace std;

void display(int var){
cout<<"this is int";
cout<<var<<endl;

}
void display(double var)
{
cout<<"this is double";
cout<<var<<endl;

}
void display(int var1, double var2)
{
cout<<"this is int & double ";
cout<<var1<<" & ";
cout<<var2;
}
int main()
{
display(5);
display(6.55);
display(5,5.7);


return 0;
}

