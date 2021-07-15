#include<iostream>
using namespace std;
//Area -- parent class
class Area
{
float dimension1, dimension2;
public:
    Area(float d1,float d2){
    dimension1 = d1;
    dimension2 = d2;
    }
    float d1(){
    return dimension1;
    }
    float d2(){
    return dimension2;
    }
    //Making getarea() -- A virtual function...........
    //Remove the (virtual).....to see the difference....
    //By virtual function you can modified/override the function & can access it by the Base class's pointer
    virtual float getarea(){
    cout<<"Area is: "<<endl;
    return dimension1*dimension2;
    }

};
//Triangle  -- Derived class of Area.......
class Triangle : public Area
{
public:
    float base,height;
    Triangle(float a,float b):Area(a,b)
    {
    base = a;
    height = b;
    }
   float getarea(){
   cout<<"Area of Triangle: "<<endl;
   return base*height;
   }

};
int main(){
//_____________________________________________________________________________
//Creating a pointer of Area(Base) class to access overriding function(getarea) of Triangle(Derived) class....
Area *obj;
//_____________________________________________________________________________
//Creating objects & Assigning values....
Area obj1(4,6);
Triangle obj2(5,7);
//_____________________________________________________________________________
//Taking the address of Triangle class's object....
obj = &obj2;
//Calling the getarea() function of Triangle class by pointer........
cout<<obj->getarea()<<endl;
//_____________________________________________________________________________
//Taking the address of Area class's object....
obj = &obj1;
//Calling the getarea() function of Area class by pointer........
cout<<obj->getarea();

return 0;
}
