#include<iostream>
#include<cmath>
using namespace std;
class operator_overload
{
   private:
   double a;
   double b;
   public:
   //int real,imaginary;
   operator_overload()
   {
       a=b=0;
   }
   operator_overload(double x)
   {
       a=x;
   }
   void getmethod()
   {
       cin>>a;
   }
   operator_overload operator + (const operator_overload & obj)
   {
       operator_overload temp;
       temp.a=a+obj.a;
       temp.b=b+obj.b;
       return temp;
   }
   operator_overload operator - (const operator_overload & obj)
   {
       operator_overload temp;
       temp.a=a-obj.a;
       temp.b=b-obj.b;
       return temp;
   }
     operator_overload operator / (const operator_overload & obj)
   {
       operator_overload temp;
       temp.a=a/obj.a;
       temp.b=b/obj.b;
       return temp;
   }
      operator_overload operator * (const operator_overload & obj)
   {
       operator_overload temp;
       temp.a=a*obj.a;
       temp.b=b*obj.b;
       return temp;
   }
   double output()
   {
       cout<<"Farenheit:"<<a;
       return 0;
   }

};
int main()
{
  operator_overload obj1;
  obj1.getmethod();
  operator_overload obj2(32);
  operator_overload obj4(9);
  operator_overload obj5(5);
  operator_overload result;
  result =(obj1*(obj4/obj5))+obj2;
  result.output();
  return 0;
}