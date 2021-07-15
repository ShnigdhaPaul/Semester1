#include<iostream>
using namespace std;

void calculatearea(int radius)
{
float area;
area = 3.1416 * (radius*radius);
cout<<"Area of circle: "<<area<<endl;
}
void calculatearea(double length, double width)
{
double area;
area = length*width;
cout<<"Area of rectangle: "<<area<<endl;
}
void calculatearea(int height, int base){
int area;
area = 0.5*height*base;
cout<<"Area of triangle: "<<area<<endl;
}



int main()
{
calculatearea(5);
calculatearea(5.6,2.3);
calculatearea(5,2);


return 0;
}
