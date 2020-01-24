#include<iostream>
#include<cmath>
using namespace std;

class circle
{
public:
    float rad;
    const float pi=3.14;
    float perimeter(float rad)
    {
        return (2*pi*rad);
    }
    float area(float rad)
    {
        return (pi*rad*rad);
    }
};

class rectangle
{
public:
    float l,b;
    float perimeter(float l,float b)
    {
        return 2*(l+b);
    }
    float area(float l,float b)
    {
        return(l*b);
    }
};

class triangle
{
public:
    float s,a,b,c;
    float perimeter(float a,float b,float c)
    {
       return(a+b+c)/2;

    }
    float area(float a,float b, float c)
    {
        float s= (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    };

int main()
{
    circle curve;
    rectangle four;
    triangle three;
    cout<<"the properties of circle is"<<endl<<"radius"<<endl;
    cin>>curve.rad;
    cout<<"perimeter"<<endl<<curve.perimeter(curve.rad)<<endl<<"area"<<endl<<curve.area(curve.rad);
    cout<<"the properties of rectangle is"<<endl<<"length and breadth"<<endl;
    cin>>four.l>>four.b;
    cout<<"perimeter"<<endl<<four.perimeter(four.l,four.b)<<endl<<"area"<<endl<<four.area(four.l,four.b);
    cout<<"the properties of triangle is"<<endl<<"sides"<<endl;
    cin>>three.a>>three.b>>three.c;
    cout<<"perimeter"<<endl<<three.perimeter(three.a,three.b,three.c)<<endl<<"area:"<<endl<<three.area(three.a,three.b, three.c);
    return 0;
}
