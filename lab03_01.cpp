#include<iostream>
using namespace std;

class centigrade
{
   private:
      float temp;

   public:
    float tofarenheit()
    {
        cout<<"\nenter the temperature in centigrade:"<<endl;
        cin>>temp;
        return ((9*temp)/5+32);
    }
};

class farenheit
{
   private:
      float temp;

   public:
    float tocentigrade()
    {
        cout<<"\nenter the temperature in farenheit:"<<endl;
        cin>>temp;
        return (5*(temp-32)/9);
    }
};

int main()
{
    centigrade temp1;
    farenheit temp2;
    cout<<"\nthe converted temperature is:"<<temp2.tocentigrade()<<"celsius";
    cout<<"\nthe converted temperature is:"<<temp1.tofarenheit()<<"farenheit";
    return 0;
}
