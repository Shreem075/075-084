#include<iostream>
using namespace std;

float current_salary(int salary,float incre)
{
    return (salary+incre);
}

int main()
{
    int s1,s2,s3,s4;
    cout<<"Salary in 2009:"<<endl;
    cout<<"1.Chief executive officer:";
    cin>>s1;
    cout<<"2.Information officer:";
    cin>>s2;
    cout<<"3.System analyst:";
    cin>>s3;
    cout<<"4.Programmer:";
    cin>>s4;
    cout<<"\n\nSalary in 2010"<<endl;
    cout<<"1.Chief executive officer:"<<current_salary(s1,0.09*s1);
    cout<<"\n 2.Information officer:"<<current_salary(s2,0.10*s2)<<endl;
    cout<<"3.System analyst:"<<current_salary(s3,0.12*s3)<<endl;
    cout<<"4.Programmer:"<<current_salary(s4,0.12*s4)<<endl;

    return 0;
}
