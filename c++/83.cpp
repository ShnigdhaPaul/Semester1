#include<iostream>
#include<conio.h>
using namespace std;
class box{
float height, length, width,a;
public:
void setvalues()
{
    cout<< "enter the height:";
    cin>> height;
    cout<< "enter the length";
    cin>> length;
    cout<< "enter the width:";
    cin>> width;
}
void area(){
    a=height*length*width;
}

float getarea( )
{
    return a;
}
};
int main()
{
    box b;
b.setvalues();
b.area();
cout<<b.getarea();

}

