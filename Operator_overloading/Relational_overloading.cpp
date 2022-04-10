#include<iostream>
#include<cmath>
using namespace std;
class operator_overload
{
   public:
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
   operator_overload operator < (const operator_overload &obj2)
   {
       operator_overload temp;
       temp.a= a<obj2.a;
       temp.b= b<obj2.b;
       return temp;
   }

   operator_overload operator+ (const operator_overload & obj1)
   {
       operator_overload temp;
       temp.a=a+obj1.a;
       temp.b=b+obj1.b;
       return temp;
   }

   void output()
   {
       cout<<a<<" "<<b<<endl;
   }
   friend void hello();

};

void hello()
{
    cout<<"HEllo";
}



int main()
{
  operator_overload obj1(7,9);
  operator_overload obj2(6,7);
  operator_overload result;
  result=obj1<obj2;
  result.output();
  result =obj1+obj2;
  result.output();
  hello();
}
