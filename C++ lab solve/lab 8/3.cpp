#include<iostream>
using namespace std;
class Box{
float length,height,width,Area;
public:

   void setvalues()
    {
     float a,b,c;
    cout<<"Lenght: ";
    cin>>a;
    cout<<"Height: ";
    cin>>b;
    cout<<"Width: ";
    cin>>c;
    length = a;
    height = b;
    width  = c;
    }
   void area()
   {
   Area = length*height*width;
   }
   float getarea(){
   return Area;
   }
};
int main()
{
Box Box1;
Box1.setvalues();
Box1.area();
cout<<Box1.getarea();


return 0;
}
