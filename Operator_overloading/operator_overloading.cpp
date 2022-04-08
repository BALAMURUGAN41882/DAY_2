#include<iostream>
#include<cmath>
using namespace std;
class operator_overload
{
   private:
   int a;
   int b;
   public:
   //int real,imaginary;
   operator_overload()
   {
       a=b=0;
   }
   operator_overload(int x,int y)
   {
       a=x;
       b=y;
   }
   operator_overload operator + (const operator_overload & obj)
   {
       operator_overload temp;
       temp.a=a+obj.a;
       temp.b=b+obj.b;
       return temp;
   }
   void output()
   {
       cout<<a<<b;
   }

};
int main()
{
  operator_overload obj1(4,5);
  operator_overload obj2(6,7);
  operator_overload result;
  result =obj1+obj2;
  result.output();
 
}