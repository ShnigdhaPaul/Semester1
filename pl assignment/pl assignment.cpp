#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class point
{
    double x,y;
    public :
    point(double m=0,double n=0)
    {
        x=m;
        y=n;
    }

    double getx()
    {
        return x;
    }
    double gety()
    {
        return y;
    }
    double distance(point p)
    {
       double x1=p.getx();
       double x2=getx();
       double y1=p.gety();
       double y2=gety();
      double q=pow((x2-x1),2);
      double w=pow((y2-y1),2);
      double e=sqrt(q+w);
       return e;
    }
};


class triangle
{
    point x,y,z;
    public :
    triangle(point p,point q,point r)
    {
        x=p;
        y=q;
        z =r;
    }
    double perameter()
    {
        double a=x.distance(y);
        double b=y.distance(z);
        double c =z.distance(x);
        double P=(a+b+c);
        return P;
    }

};


int main()
{
    double x1,x2,x3,y1,y2,y3;
    cout<<"Enter the value of x coordinate for p point X1: " ;
    cin>>x1;
    cout<<"Enter the value of y coordinate for p point Y1: " ;
    cin>>y1;

    cout<<"Enter the value of x coordinate for q point X2: " ;
    cin>>x2;
    cout<<"Enter the value of y coordinate for q point Y2: " ;
    cin>>y2;

    cout<<"Enter the value of x coordinate for r point X3: " ;
    cin>>x3;
    cout<<"Enter the value of y coordinate for r point Y3: " ;
    cin>>y3;


    point p(x1,y1);
    point q(x2,y2);
    point r(x3,y3);

    cout<<"Distance between (PQ) :  "<< p.distance(q)<<endl;
    cout<<"Distance between (PR) :  "<< p.distance(r)<<endl;
    cout<<"Distance between (QR) :  "<< q.distance(r)<<endl;


    triangle ob(p,q,r);
    cout<<"the perimeter of the triangle is : " <<ob.perameter();
}