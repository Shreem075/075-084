#include<iostream>
using namespace std;
//function definition
int temp(int &t1,int &t2);
int main()
{
    int t1,t2;
    cout<<"enter the two temperatures:";
    cin>>t1>>t2;
    temp(t1,t2);
    cout<<"the temperatures are:"<<t1<<"and"<<t2;
    return 0;
}
temp(int &t1, int &t2)
{
    if(t1>t2)
    {
        return t1=100;
    }
    if(t2>t1)
        {
            return t2=100;
        }
}
