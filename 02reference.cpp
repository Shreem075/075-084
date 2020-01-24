#include<iostream>
using namespace std;

float func();//data input
float func(float,float);//data converter
void func(float &x);//data display

 int main()
 {
     float m=12.0;
     cout<<"function overloading:";
     //converter obj;
     float feet=func();
     float inch=func(feet,m);
     func(inch);
     return 0;
 }

 float func()
 {
     float feet;
     cout<<"enter the number to be converted:";
     cin>>feet;
     return feet;
 }

 float func(float feet,float m)
 {
     float inch;
     inch=feet*m;
     return inch;
 }

 void func(float &inch)
 {
     cout<<"The converted number is:"<<inch;
 }

