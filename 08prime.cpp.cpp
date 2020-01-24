#include<iostream>
using namespace std;
int main()
{
    int i,a,count=0;
    cout<<"enter the number";
    cin>>a;
    for(i=2;i<a;i++)
    {
       if(a%i==0)
       {
           count++;
           break;
       }
    }
    if(count==0)
    {
        cout<<"the number is prime";

    }
    else
    {
        cout<<"the number is not prime";
    }
        return 0;
    }

