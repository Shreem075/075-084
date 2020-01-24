#include<iostream>
using namespace std;
int main()
{
    int temp,i,n;
    cout<<"Enter the number for the table u want ";
    cin>>n;
    cout<<"Table of "<< n << "is:\n\n";
    for(i=1;i<=10;i++)
    {
        temp=n*i;
        cout<<n<<"*"<<i<<"="<<temp<<"\n";
    }
    return 0;
}
