#include<iostream>
using namespace std;

class Area
{
private:
    float len,bd;

public:
    Area():len(5),bd(5){ }   //constructor with no arguments

    Area(float l, float b):len(l),bd(b) {}//with arguments

    //void getdata()
    //{
        //cout<<"\nenter the length and breadth:";
       // cin>>len>>bd;
    //}

    int  calcarea()
    {
        return (len*bd);
    }

    void display(int temp)
    {
        cout<<" \nthe area is :"<<temp;
    }
};

int main()
{
    int temp;
    Area A1, A2(2,5);
    cout<<"when no argument is passed";
    temp=A1.calcarea();
    A1.display(temp);

    cout<<"\narea without taking the input else with default values:";
    temp=A2.calcarea();
    A2.display(temp);

    return 0;
}

