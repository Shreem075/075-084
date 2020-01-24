#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter the character";
    cin>>n;
    if((n>=65&&n<=90)||(n>=97&&n<=122))
    {
        cout<<"it is an alpahbet";
    }
    else
    {
        cout<<"it is not";
    }
    return 0;
}
