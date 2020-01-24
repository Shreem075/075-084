#include<iostream>

class Time
{
private:
    int hh,mm,ss;
    char ap;
public:
    Time();
    Time(int h,int m,int s);
    Time addTime(Time add);
    void showTime();
};

Time::Time()
{
    hh=00,mm=00,ss=00;
}
Time::Time(int h, int m, int s)
{
    hh=h,mm=m,ss=s;
}
Time Time::addTime(Time add)
{
Time result;
result.ss=ss+add.ss;
result.mm=mm+add.mm;
result.hh=hh+add.hh;
if(result.ss>59) result.mm++,result.ss-=60;
if(result.mm>59) result.hh++,result.mm-=60;
if(result.hh>23) result.hh-=24;
return result;
}
void Time::showTime()
{
    if(hh<10) std::cout<<"0"<<hh<<":";
    else std::cout<<hh<<":";
    if(mm<10) std::cout<<"0"<<mm<<":";
    else std::cout<<mm<<":";
    if(ss<10) std::cout<<"0"<<ss;
    else std::cout<<ss;
}

int main()
{
    Time t1;
    Time t2(2,45,30);
    Time t3(3,40,36);
    Time add=t2.addTime(t3);
    std::cout<<"\nTime initialized to zero             : ";
    t1.showTime();
    std::cout<<"\nTime initialized by passing arguments: ";
    t2.showTime();
    std::cout<<"\nTime added                           : ";
    t3.showTime();
    std::cout<<"\nResultant Time                       : ";
    add.showTime();
}

