#include<iostream>
#include<stdlib.h> // this is required for other functions like exit(0) used below .
using namespace std;
int main()
{
    float a,b, add,sub,mul,div;
    char choice;
    cout<<"1.Addition";
    cout<<"\n2.subtraction";
    cout<<"\n3.multiplication";
    cout<<"\n4.division";
    cout<<"\n5.exit";
    cout<<"\nEnter your choice";
    cin>>choice;
     switch(choice)
     {
         case '1':cout<<"enter two numbers";
                cin>>a>>b;
                add=a+b;
                cout<<"result:"<<add;
                break;
         case '2':cout<<"enter two numbers";
                 cin>>a>>b;
                 sub=a-b;
                 cout<<"result:"<<sub;
                 break;
         case '3':cout<<"enter two numbers";
                 cin>>a>>b;
                 mul=a*b;
                 cout<<"result:"<<mul;
                 break;
         case '4':cout<<"enter two numbers";
                 cin>>a>>b;
                 div=a/b;
                 cout<<"result:"<<div;
                 break;
         case '5':exit(0);
                break;
         default : cout<<"wrong choice!!!";
                   break;
     }
     return 0;

}
