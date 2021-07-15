#include<iostream>
#include<cmath>
using namespace std;
class point
{
double x,y;
public:
    point(double a=0,double b=0){
    x=a;
    y=b;
    }
double getx()
{
return x;
}
double gety()
{
return y;
}
double double_r_value(){
double r;
r = sqrt(pow(x,2)+pow(y,2));
return r;
}
double double_theta_value()
{
double theta;
theta = atan(y/x);
return theta;
}
bool onx(){
if(y==0){

    return true;
}
else
    {
    return false;

    }
}
bool ony(){
if(x==0){

    return true;

}else
{

return false;
}
}
double distance(point p)
{
double distance;
distance = sqrt(pow((p.x-x),2)+pow((p.y-y),2));
return distance;
}
bool samepoint(point p){
if(p.x==x && p.y==y)
    {
  //  cout<<"true";
    return true;
    }
else
    {
   // cout<<"flase";
    return false;
    }
}
void shitfby(int shiftx,int shifty){

cout<<"x axis shift from "<<x<<" to "<<shiftx+x<<endl;
cout<<"y axis shift from "<<y<<" to "<<shifty+y<<endl;
}
};
int main()
{
double polar_co_ordinates,theta_value;
point a(3,4),b(3,4);
polar_co_ordinates = a.double_r_value();
theta_value = a.double_theta_value();
cout<<"samepoint "<<a.samepoint(b)<<endl;
cout<<"Distance "<<a.distance(b)<<endl;
cout<<"Value of polar_co_ordinates: "<<polar_co_ordinates<<endl;
cout<<"Theta Value of polar_co_ordinates: "<<theta_value<<endl;
cout<<"On x axis "<<a.onx()<<endl;
cout<<"On y axis "<<a.ony()<<endl;
a.shitfby(4,5);
return 0;
}

