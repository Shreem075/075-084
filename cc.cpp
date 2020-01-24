#include<iostream>

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
    id="075F12",name="Department of Automobile";
    std::cout<<"ID: "<<id<<"\tName: "<<name;
}

department::~department()
{
    std::cout<<"\nObject goes out of the space";
}

int main()
{
    department d1;
}
