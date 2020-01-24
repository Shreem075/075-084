#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the 1st num";
    cin>>a;
    cout<<"\nenter the 2nd num";
    cin>>b;

    if(a>b)
        cout<<"\nthe greatest num is:"<<a;
    else if (a<b)
        cout<<"\nthe greatest num is:"<<b;
    else
        cout<<"\nthey r equal";
    return 0;
}
