#include<iostream>
using namespace std;
int main()
{
    int n, i,sum=0;
    cout<<"enter the number of marks you want as input for the arithmetic mean:";
    cin>>n;
    int marks[n];
    cout<<"\nenter <<n<< numbers\n";
    for(i=0;i<n;i++)
    {
       cin>>marks[i];
       sum=sum+marks[i];
    }
    float mean = sum / n;
    cout<<"\nthe mean is:"<<mean;
    return 0;


}
