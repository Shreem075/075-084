#include<iostream>
using namespace std;

class employee
{
public:
    int employe_id,year;
    float OT,bonus;

    float setpara()
    {
        cout<<"enter the year";
        cin>>year;
        cout<<"enter the employee id:";
        cin>>employe_id;
        cout<<"enter the hours for over tym worked";
        cin>>OT;
        cout<<"enter the bonus ";
        cin>>bonus;
    }

    float displayreport(int employe_id, int year, float OT, float bonus)
    {
        cout<<"employee with id"<<employe_id<<"has received rs"<<bonus<<"as bonus"<<endl<<"and"<<endl<<"had worked for"<<OT<<"hours as a overtime in a year"<<year<<endl;
    }

};

int main()
{
    employee emp[100];
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int flag=0;
    for(flag=0;flag<n;flag++)
    {
        emp[flag].setpara();
    }
    for(flag=0;flag<n;flag++)
    {
        emp[flag].displayreport(emp[flag].employe_id,emp[flag].year,emp[flag].OT,emp[flag].bonus);
    }
    return 0;
}

