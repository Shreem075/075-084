#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"enter the year";
    cin>>yr;
    if(yr%4==0&&yr%100!=0)
    {
        cout<<"it is the leap year";
    }
    else if(yr%100==0&&yr%400==0)
    {
        cout<<"it is leap year";
    }
    else if(yr%400==0)
    {
        cout<<"it is leap year";
    }
    else
    {
        cout<<"it is not";
    }
    return 0;
}
