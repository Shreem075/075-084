#include<iostream>
using namespace std;
//function declaration
float display(float sal1,float incre1);
float display(float sal2,float incre2);
float display(float sal3,float incre3);
float display(float sal4,float incre4);
int main()
{
    float s1,s2,s3,s4,sal1,sal2,sal3,sal4,incre1,incre2,incre3,incre4;
    cout<<"The salaries in 2009";
    cout<<"Chief executive officer:";
    cin>>s1;
    cout<<"Information officer:";
    cin>>s2;
    cout<<"System analyst:";
    cin>>s3;
    cout<<"programmer:";
    cin>>s4;
    cout<<"function overloading:";
    float cur_sal01=display(sal1, incre1);
    float cur_sal02=display(sal2, incre2);
    float cur_sal03=display(sal3, incre3);
    float cur_sal04=display(sal4, incre4);
    return 0;
}
 display(float sal1,float incre1)
{
    float s1;
    float cur_sal01=(s1,0.9*s1);
    return cur_sal01;
}
 display(float sal2,float incre2)
{
    float s2;
    float cur_sal02=(s2,0.1*s2);
    return cur_sal02;
}
 display(float sal3,float incre3)
{
    float s3;
    float cur_sal03=(s3,0.12*s3);
    return cur_sal03;
}
 display(float sal4,float incre4)
{
    float s4;
    float cur_sal04=(s4,0.12*s4);
    return cur_sal04;
}


