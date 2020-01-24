#include<iostream>
using namespace std;
class Serial
{
private:
       static int count;
       int num;
public:
Serial();
void show();
};
Serial::Serial()
       {
              static int count=0;
              num=++count;
       }
       void Serial::show()
       {
              cout<<num<<".Object Created"<<"\n";
       }
int main()
       {
           Serial obj1,obj2,obj3;
           obj1.show();
           obj2.show();
           obj3.show();
       }
