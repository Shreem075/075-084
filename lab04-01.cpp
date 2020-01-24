#include<iostream>
using namespace std;

class time
{
private:
    int hh, mm, ss;
public:
    time();
    time(int a, int b, int c);
    time addtime(time add);
    void showtime();
};

time::time()
{
    hh=0;
    mm=0;
    ss=0;
}

time::time(int h,int m, int s)
{
    hh=h;
    mm=m;
    ss=s;
}

time time::addtime(time add)
{
    time result;
    result.ss=ss+add.ss;
    result.mm=mm+add.mm;
    result.ss=ss+add.ss;
    if(result.ss>59)
    {
        result.mm++;
        result.ss=result.ss-60;
    }
    if(result.mm>59)
    {
        result.hh++;
        result.mm=result.mm-60;
    }
    if(result.hh>23)
    {
        result.hh-24;
    }
    return result;
}
void  time::showtime()
{
    if(hh<10)
        cout<<"0"<<hh<<":";
    else
        cout<<hh<<":";
    if(mm<10)
        cout<<"0"<<mm<<":";
    else
        cout<<mm<<":";
    if(hh<10)
        cout<<"0"<<ss<<":";
    else
        cout<<ss<<":";
}
int main()
{
    time t1;
    time t2(2,45,60);
    time t3(12,33,33);
    time add=t2.addtime(t3);
    cout<<"time initialized to zero:";
    t1.showtime();
    cout<<"\ntime passed initialized through arguments:";
    t2.showtime();
    cout<<"\ntime to be added:";
    t3.showtime();
    cout<<"\nadded time:";
    add.showtime();
    return 0;
}
