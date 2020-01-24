#include<iostream>
using namespace std;

class prime
{
private:
    int num;

public:
    bool isprime()
    {
        bool flag=true;
        int i;
        cout<<"enter the number:"<<endl;
        cin>>num;
        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                flag=false;
                break;
            }
        }
        return flag;

    }
};
int main()
{
    prime num1;
    if(num1.isprime())
        cout<<"it is prime";
    else
        cout<<"it is not prime";
    return 0;
}
