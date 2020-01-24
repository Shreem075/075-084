#include<iostream>
using namespace std;

class Area
{
private:
    float l,b;

public:
    Area():l(5),b(5){ }   //constructor

    void getdata()
    {
        cout<<"enter the length and breadth";
        cin>>l>>b;
    }

    int  calcarea()
    {
        return (l*b);
    }

    void display(int temp)
    {
        cout<<" the area is :"<<temp;
    }
};

int main()
{
    int temp;
    Area A1, A2;
    A1.getdata();
    temp=A1.calcarea();
    A1.display(temp);

    cout<<"area without taking the input else with default values:";
    temp=A2.calcarea();
    A2.display(temp);

    return 0;
}
