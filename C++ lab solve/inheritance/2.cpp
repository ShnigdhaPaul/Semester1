#include<iostream>
using namespace std;
//class person..........for name & age....
class person{
char name[30];
protected:
    int age;
public:
    //set name & age......................
    void setName_age(){
    cout<<"Your name?"<<endl;
    //Takes name with space...............
    cin.getline(name,30);
    cout<<"Your age?"<<endl;
    cin>>age;
    }
    //get name............................
    void show_person(){

    cout<<"Name: "<<name<<endl;
    }
    //get age.............................
    void getage(){
    cout<<"Age: "<<age<<endl;
    }
};
//class student .......take cgpa........
class Student :virtual public person
{

protected:
    float cgpa;
public:
    //set Cgpa.....................
    void setCgpa(){
    cout<<"your cgpa: ";
    cin>>cgpa;
    }
    //show cgpa....................
    void show_person(){
    cout<<"Cgpa: "<<cgpa<<endl;
    }
};
class Faculty : virtual public person
{
protected:
    int salary_per_hour;
public:
    //set faculty................................
    void setFaculty()
    {
    cout<<"salary per hour: ";
    cin>>salary_per_hour;
    }
    //show salary per hour.................
    void show_Faculty()
    {
    cout<<"salary_per_hour: "<<salary_per_hour<<endl;
    }
};
class TA : public Faculty , public Student
{
protected:
    int hour_per_day;
public:
    void setTA(){
    cout<<"hour per day: ";
    cin>>hour_per_day;
    }
    //return the salary per month..............
    int show_salary()
    {
    return hour_per_day*salary_per_hour*30;
    }
    void show_TA(){

    cout<<endl<<endl<<"All Info about TA: "<<endl<<endl;

    person::show_person();             //name
    getage();                          //age

    Student::show_person();            //cgpa

    show_Faculty();                    //salary_per_hour
    //total salary.....................................
    cout<<"Total Salary: "<<show_salary();
    }


};
int main()
{
TA efaz;
efaz.setName_age();
efaz.setCgpa();
efaz.setFaculty();
efaz.setTA();
efaz.show_TA();

return 0;
}
