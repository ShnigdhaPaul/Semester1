#include<iostream>
using namespace std;
struct student{
string id;
double marks;
};

int main()
{

int i,j,total=0,average=0;
cout<<"Give us info of 5 students"<<endl;
cout<<"\n";
student stu[5];
for(i=0;i<5;i++)
    {
    cout<<"Id: ";
    cin>>stu[i].id;
    cout<<"Marks: ";
    cin>>stu[i].marks;
    cout<<"\n";
    total = total + stu[i].marks;
    }
    average = total/5;
cout<<"Average marks: "<<average<<endl;
return 0;
}
