#include<iostream>
#include<cmath>
using namespace std;
class operator_overload
{
   private:
   int a;
   int b;
   int c,d;
   public:
   //int real,imaginary;
   operator_overload()
   {
       a=0;
       b=0;
   }
   operator_overload(int x,int y)
   {
       a=x;
       b=y;
   }
   
   void operator* ()
   {
       a=2*a;
       b=2*b;
   }
   operator_overload operator-- ()
   {
       operator_overload temp;
       temp.a=--a;
       temp.b=--b;
       return temp;
   }
   int getX()
   {
      return a;
   }
   int getY()
   {
       return b;
   }
   
};
int main()
{
  operator_overload obj1,obj3;
  operator_overload obj2(4,5);
   cout<<obj2.getX()<<endl<<obj2.getY()<<"\n";
  *obj2;//operator overload
  obj3=--obj2;
  
  //obj1.output(4,5);
  cout<<obj3.getX()<<endl<<obj3.getY();
 
  }