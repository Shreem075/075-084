#include<iostream>
using namespace std;
int main()
{
    int marks[7],i,sum=0;
    cout<<"enter your marks in\tmath\tc++\tEM\tDL\tTOC\tECT\tEDC\n ";
    for(i=0;i<7;i++)
    {
     cin>>marks[i];
     sum=sum+marks[i];
    }
    cout<<"\tmath\tc++\tEM\tDL\tTOC\tECT\tEDC\n";
    for(i=0;i<7;i++)
    {
    cout<<"\t"<<marks[i];
    }
    float avg=sum/7;
    float perc;
    perc=(sum/700.0)*100;
    cout<<"\nthe sum is :"<<sum;
    cout<<"\nthe average marks is:"<<avg;
    cout<<"\nthe percentage is:"<<perc;
    return 0;
    }
