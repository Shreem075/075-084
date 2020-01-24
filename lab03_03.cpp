#include<iostream>
using namespace std;

class carpark
{
public:
    int carid;
    int charge_hour;
    float time;


    float setdata()
    {
        cout<<"enter carid:";
        cin>>carid;
        cout<<"car is parked for(hr):";
        cin>>time;
        cout<<"charge per hour:";
        cin>>charge_hour;

    }
    float showdata(int carid,int charge_hour, float time)
    {
        float total_charge= charge_hour*time;
        cout<<"tne total charge for car with id "<<carid<<"is rs"<< total_charge;

    }
};

int main()
{
  carpark acar;
  acar.setdata();
  acar.showdata(acar.carid,acar.charge_hour,acar.time);
  return 0;
}
