#include<iostream>
using namespace std;
int main()
{
    int num1,num2, *ptr1, *ptr2; // *ptr is the poiter arrow head, * is the arrrow head that points , when we put the address of num1 and num2 using &num1 and &num2 we give the value of addresses of num1 and num2 to the pointer * and thus it points to that adddress and detects the num.
    cout<<"enter any two num:\n";
    cin>>num1>>num2;
    ptr1=&num1;
    ptr2=&num2;
    int sum= *ptr1 + *ptr2;
    cout<<"the sum is:"<<sum;
    return 0;
}
