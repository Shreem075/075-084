#include<iostream>
using namespace std;
struct date
{
    int month, day , year;
};
void miti(date);
int main()
{
    struct date d;
    cout<<"enter month:";
    cin>>d.month;
    cout<<"enter day:";
    cin>>d.day;
    cout<<"enter year:";
    cin>>d.year;

    miti(d);
    return 0;
}
void miti(date d)
{
  cout<<"System date is:"<<d.month <<"/"<<d.day<< "/"<<d.year;
}
