#include<iostream>
#include<stdio.h>
using namespace std;
class student{
string Roll;
float Marks;
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
void compare(student a,student b,student c)
{
if(a.y<b.y)
    {
    if(a.y<c.y){

        cout<<"Roll: "<<a.x<<" gets the lowest number";

    }else
    {
    cout<<"Roll: "<<c.x<<" gets the lowest number";

    }

    }
    else
    {
         if(b.y<c.y){

        cout<<"Roll: "<<b.x<<" gets the lowest number";

    }else
    {
    cout<<"Roll: "<<c.x<<" gets the lowest number";

    }
    }

}
int main()
{
student stu1,stu2,stu3;
stu1.setval();
stu1.getval();
stu2.setval();
stu2.getval();
stu3.setval();
stu3.getval();
compare(stu1,stu2,stu3);



return 0;
}

