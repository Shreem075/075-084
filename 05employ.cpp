#include<iostream>
using namespace std;
//declaration of function
inline float display(float salary);

int main()
{
    float pay, salary;
    cout<<"enter the salary:";
    cin>>salary;
   pay=display(salary);
   cout<<"Net Salary::"<<pay;
    return 0;
}
inline float display(float salary)
{
    float net_payment=salary-0.1*salary;
    return net_payment;
}

