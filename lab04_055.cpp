#include<iostream>
using namespace std;
class Demo {
   int val;
   public:
      Demo(int);
      int getValue()
      const;
      int addValue(int);

};
 Demo::Demo(int x = 0)
 {
         val = x;
 }

 int Demo::addValue(int a)
 {
     int sum=val+a;
     cout<<"\nThe sum value: "<<sum;
 }
 int Demo::getValue() const
 {
         return val;
 }
int main()
{
   const Demo d(28);
   Demo d1(8);
   cout << "The value using object d : " << d.getValue();//const_object.const_mem_function
   cout << "\nThe value using object d1 : " << d1.getValue();//non_const_object.const_mem_function
   //d.addValue(7);const_object.non_const_mem_function is not valid
   d1.addValue(9);//non_const_object.non_const_mem_function
   return 0;
}
