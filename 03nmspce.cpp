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
    int a=square::num=3;
    int b=cube::num=4;
    cout<<"\nsquare of num of namespace cube is:"<<square::fun(b);
    cout<<"\ncube of num of namespace square is:"<<cube::fun(a);
    return 0;
}

