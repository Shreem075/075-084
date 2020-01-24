#include<iostream>
using namespace std;
class department
{
private:
    char *id,*name;
public:
    department();
    ~department();
};

department::department()
{
    id="075084",name="Department of Automobile";
    cout<<"ID: "<<id<<"\tName: "<<name;
}

department::~department()
{
    cout<<"\nObject goes out of the space";
}

int main()
{
    department d1;
}
