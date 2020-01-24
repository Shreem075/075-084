#include<iostream>
using namespace std;
//defining first name space
namespace square
{
    int num;
    int fun(int a)
    {
       return a*a;
    }
}
//defining second name space
namespace cube
{
    int num;
    int fun(int b)
    {
        return b*b*b;
    }
}

int main()
{
    int a,b;
    cout<<"enter the value a:";
    cin>>a;
    cout<<"enter the value b:";
    cin>>b;
     square::num=a;
     cube::num=b;
    cout<<"\nsquare of num of namespace cube is:"<<square::fun(b);
    cout<<"\ncube of num of namespace square is:"<<cube::fun(a);
    return 0;
}


