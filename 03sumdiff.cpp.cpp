#include<iostream>
using namespace std;
int main()
{
    int a , b , sum , diff ,mul ,div;
    cout<<"enter the 1st num:";//generally when we srite a statement in cout we enclose it in invertd comma
    cin>>a;
    cout<<"enter the second num:";
    cin>>b;
    sum=a + b;
    diff = a-b;
    mul = a*b;
    div=a/b;
    cout<<"the sum is :"<<sum;
    cout<<"\nthe diff is:"<<diff;
    cout<<"\nthe mul is :"<<mul;
    cout<<"\nthe div is:"<<div; // bt when we need to write a final statement and also print out the value we use inverted comma as well as << to priint the final value
    return 0;
}
