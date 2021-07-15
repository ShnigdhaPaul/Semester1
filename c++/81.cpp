#include<iostream>
#include<conio.h>
using namespace std;

struct student{
   int id;
   float marks;
};
int main()
{
    int i;
    float avg;
    float sum=0;
    struct student s[5];

for(i=0;i<5;i++)
{
    cout<<"enter the id:";
    cin>>s[i].id;
    cout<<"enter the marks:";
    cin>>s[i].marks;
}
for(i=0;i<5;i++)
{


sum=sum+s[i].marks;
}
avg=sum/5;
cout<<"the avg is :"<<avg;
}
