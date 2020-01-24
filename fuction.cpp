#include<iostream>
using namespace std;

//function declaration
int add(int,int);

int main()
{
   int num1, num2,sum;
    cout<<"enter two numbers:";
    cin>>num1>>num2;

    //fuction call
    sum=add(num1,num2);
    cout<<"sum is:"<<sum;
    return 0;
}
//fucntion definition
int add(int a, int b)
{
    int add;
    add=a+b;
    return add;

}

