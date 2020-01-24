#include<iostream>

class Vehicle
{
private:
    int numVehicle,hour,rate;
public:
    Vehicle();
    void calDis();
    Vehicle(const Vehicle &copy);

};

Vehicle::Vehicle()//Constructor
{
    numVehicle=13,hour=4,rate=35;
}

Vehicle::Vehicle(const Vehicle &copy)//Copy constructor
{
    numVehicle=copy.numVehicle;
    hour=copy.hour;
    rate=copy.rate;
}

void Vehicle::calDis()
{
    if(numVehicle>10) rate=0.9*rate;
    int tcharge=rate*hour;
     std::cout<<"Number of vehicles:"<<numVehicle<<"\tHours: "<<hour<<" hr\tRate: Rs."<<rate<<" per hour\n";
    std::cout<<"Total charge: Rs."<<tcharge<<std::endl;
}

int main()
{
    Vehicle v1;
    Vehicle v2=v1;
    //normal constructor
    v1.calDis();
    //copy constructor
    v2.calDis();
}
