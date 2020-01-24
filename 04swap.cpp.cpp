#include<iostream>
using namespace std;
int main()
{
    int a, b,c;
    cout<<"enter the 1st variable:"; // \t provide space
    cin>>a;
    cout<<"enter the 2nd variable:";
    cin>>b;
    cout<<"before swap";
    cout<<"\nthe 1st variable is"<<a;
    cout<<"\nthe 2nd variable is"<<b;
    c=a;// jun variable le value linxa tyo = jasko linxa tyo
    a=b;
    b=c;
    cout<<"\nafter swap";
    cout<<"\nthe 1st variable is:"<<a;
    cout<<"\nthe 2nd variable is:"<<b;
    return 0;

}
