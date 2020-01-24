#include<iostream>
using namespace std;
int main()
{
    int num,orig,rem,rev=0;
    cout<<"enter the number";
    cin>>num;
    orig=num;
    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==orig)
    {
        cout<<"the number is reversible";
        cout<<"\nthe reverse of the number is"<<rev;
    }
    else
    {
        cout<<"the number is not reversible";
    }
    return 0;
}
