#include<iostream>
#include<string.h>

class Concatenate
{
private:
    char* array;
public:
    Concatenate();
    ~Concatenate();
    Concatenate(char*);
    Concatenate join(Concatenate);
    void display();

};

Concatenate::Concatenate()
{
   array=new char[14];
   array="Engineers are " ;
}

Concatenate::Concatenate(char str[])
{
    array=new char[19];
    array=str;
}

Concatenate::~Concatenate()
{
    delete array;
}

Concatenate Concatenate::join(Concatenate obj)
{
    Concatenate res;
    res.array=new char[33];
    for(int i=0;i<14;i++ )
    res.array[i] = array[i];

    for(int i=0;i<18;i++ )
    res.array[i+14] = obj.array[i];

    res.array[32]='\0'; // terminate the char*
    return res;

}

void Concatenate::display()
{
std::cout<<"Concatenated string: "<<array;
}
int main()
{
    Concatenate str1;
    Concatenate str2("Creatures of Logic");
    Concatenate add=str1.join(str2);
    add.display();

}
