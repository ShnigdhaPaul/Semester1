#include<iostream>
#include<stdio.h>
using namespace std;
class student{
string Roll;
int Marks;
public:
string x;
int y;
   void  setval()
    {
    cout<<"Roll: ";
    getline(cin,Roll);
    cout<<"Marks: ";
    cin>>Marks;
    getchar();
    }
    void getval(){
      x = Roll;
      y = Marks;
    }
};
void compare(student a,student b)
{
if(a.y>b.y)
    {
    cout<<"Roll: "<<a.x<<" gets the highest number";

    }else
    {
    cout<<"Roll: "<<b.x<<" gets the highest number";

    }


}
int main()
{
student stu1,stu2;
stu1.setval();
stu1.getval();
stu2.setval();
stu2.getval();
compare(stu1,stu2);



return 0;
}
