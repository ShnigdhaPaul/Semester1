#include<iostream>
using namespace std;
//creating a class ......moving_van
class moving_van
{
protected:
     float payload, weight, cost;
public:
    //moving_van set values
    moving_van(float p=0,float w=0,float c=0)
    {
    payload = p;
    weight = w;
    cost = c;
    }
//moving_van Efficiency calculate
float efficiency(){
float Efficiency;
Efficiency=payload/(payload+weight);
return Efficiency;
}
};
//creating a class ......driver
class driver{
protected:
float hourly_pay, weight;
public:

    //driver set values
    driver(float h_p,float w)
    {
    hourly_pay = h_p;
    weight = w;
    }

    //Will return Driver cost
    float cost_of_driver (int hour = 0)
    {
        return hour * hourly_pay;
    }
};
//creating a class ......driven_truck....and derived from driver & moving_van
class driven_truck : public driver ,public moving_van {


public:

    //constructor: set values to parent classes
    driven_truck(float a,float b,float c,float d,float e):driver(a,b),moving_van(c,d,e)
    {
    cout<<"value set";
    }


    // return total cost of truck & driver
    float cost_of_driven_truck (int hour)
    {
    return (cost*hour) + cost_of_driver(hour);
    }

  //calculating total weight
  float total_weight()
  {

  return driver::weight + moving_van::weight;
  }

};
int main()
{
driven_truck obj1(1000.00,50.00,5000.00,1550.00,3500.00);
cout<<endl<<"Total cost: "<<obj1.cost_of_driven_truck(2)<<endl;
cout<<"Total weight: "<<obj1.total_weight()<<endl;
cout<<"Efficiency of truck: "<<obj1.efficiency()<<endl;
return 0;
}
