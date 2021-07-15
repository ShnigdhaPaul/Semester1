//a program to calculate which browser has more user;
#include<iostream>
using namespace std;
class MozilaaFirefox
{
int value1;
public:
int setvalue(int a){
value1 = a;
}
int getvalue(){
return value1;
}
};
class InternetExplorer
{
int value2;
public:
int setvalue(int b){
value2 = b;
}
int getvalue(){
return value2;
}
};

void Compare(MozilaaFirefox i,InternetExplorer j)
{
if(i.getvalue()>j.getvalue()){

    cout<<"MozilaaFirefox";
}
else
    {
    cout<<"InternetExplorer";
    }


}
int  main(){
MozilaaFirefox number1;
InternetExplorer number2;
number1.setvalue(10);
number2.setvalue(5);
Compare(number1,number2);


return 0;
}
