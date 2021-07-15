#include<iostream>
using namespace std;
//"O" ------ constructor
//"I" ------ Destructor
class Base{

    public:
      //to calculate how many object created or destroyed...(static int count)
      static int count;
      Base(){
      count++;
      cout<<"_________________________________"<<"Created: "<<count<<endl;
      cout<<"Base"<<endl;

      }
      ~Base(){
          count--;

      cout<<"~Base"<<endl;
      cout<<"_________________________________"<<"Remaining: "<<count<<endl;
      }
};
int Base::count=0;
class Derived1 : public Base
{
     public:
      Derived1(){
      cout<<"Derived1"<<endl;
      }
      ~Derived1(){
      cout<<"~Derived"<<endl;
      }
};
class Derived2 : public Derived1
{
     public:
      Derived2(){
      cout<<"Derived2"<<endl;
      }
      ~Derived2(){

      cout<<"~Derived2"<<endl;
      }

};

int main()
{
cout<<"_________________________________"<<"Created: 0"<<endl;
Derived2 obj1;
Base obj3;
Derived1 obj2;




cout<<"\n\nCalling Destructor Started: \n\n"<<endl;
cout<<"_________________________________"<<"Remaining: "<<obj3.count<<endl;
return 0;
}
