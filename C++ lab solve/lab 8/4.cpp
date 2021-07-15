#include<iostream>
#include<cmath>
using namespace std;
class line
{
    double x1,y1,x2,y2;
    public:
        void setvalues(double a, double b, double c, double d)
        {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
        }
        double length()
        {
        double distance;
        distance = sqrt(pow((x1-x2),2)+ pow((y1-y2),2));
        return distance;
        }
};
int main()
{
double x1,x2,y1,y2;
line line1;
cout<<"Give us the co-ordinates of first point"<<endl;
cout<<"x1: ";
cin>>x1;
cout<<"y1: ";
cin>>y1;
cout<<"Give us the co-ordinates of second point"<<endl;
cout<<"x2: ";
cin>>x2;
cout<<"y2: ";
cin>>y2;
cout<<"\n";
line1.setvalues(x1,y1,x2,y2);
cout<<"Distance between two points: ";
cout<<line1.length()<<endl;
return 0;
}
