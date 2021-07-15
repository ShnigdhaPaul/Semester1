#include<iostream>
using namespace std;
class building{
int floor,room,total_square_footage;
public:
       building(int f,int r,int tsf){
       floor = f;
       room = r;
       total_square_footage = tsf;
       }
       void show_building(){
       cout<<"Floor: "<<floor<<"\nRoom: "<<room<<"\nTotal_Square_Footage: "<<total_square_footage<<endl;
       }
};
//house...............................................................................
class house : public building
{
    int Bedrooms,Bathrooms;
public:

    house(int Bed,int bath,int f,int r,int tsf) : building(f,r,tsf)
    {
    Bedrooms = Bed;
    Bathrooms = bath;
    }
void show_house(){
cout<<"Bedrooms: "<<Bedrooms<<"\nBathrooms: "<<Bathrooms<<endl;
}

};
//office...............................................................................
class office : public building
{
    int fire_extinguishers,telephones;
public:

    office(int f_e,int t,int f,int r,int tsf) : building(f,r,tsf)
    {
    fire_extinguishers= f_e;
    telephones = t;
    }
void show_office(){
cout<<"Fire_extinguishers: "<<fire_extinguishers<<"\nTelephones: "<<telephones<<endl;
}


};
int main(){
house obj(90,35,8,60,1600);
obj.show_building();
obj.show_house();
office obj1(90,35,8,60,1600);
obj1.show_building();
obj1.show_office();


}
