#include<iostream>
using namespace std;
class calculator
{
  int num;
  int n;
  public:
      void getmethod()
      {
          cin>>num;

      }
      calculator ()
      {
        num=0;
      }
        calculator(int a)
        {
           // cout<<a;
            num = a;
        }
      void printmethod()
      {
        cout<<num;
      }
      calculator operator +(const calculator & obj)
      {
          calculator temp;
          temp.num=num+obj.num;
           return temp;

      }

      calculator operator -(const calculator & obj)
      {
         calculator temp;
          temp.num=num-obj.num;
        return temp;

      }
      calculator operator *(const calculator & obj)
      {
        calculator temp;
        temp.num=num*obj.num;
        return temp;

      }
      calculator operator %(const calculator & obj)
      {
       calculator temp;
          temp.num=num+obj.num;
          return temp;

      }
      calculator operator /(const calculator & obj)
      {
        calculator temp;
        temp.num=num/obj.num;
        return temp;

      }


        calculator operator --()
      {
        calculator temp;
        temp.num=--num;
        return temp;
      }
       calculator operator ++()
      {
        calculator temp;
        temp.num=++num;
        return temp;
      }

};

int main()
{
    int n=4;
    string select;
    calculator output;

    calculator obj1[10];
    cout<<"Enter the value: "<<endl;
    for(int i=0;i<n;i++)
    {
      obj1[i].getmethod();
    }
    /* for(int i=0;i<n;i++)
    {
      obj1[i].printmethod();
    }*/
    cout<<endl;
    cin>>select ;

    if(select=="+")
    {
        calculator output(0);
      for (int i=0;i<n;i++)
      {
         output = output + obj1[i];
      }
      output.printmethod();
    }
     else if(select=="-")
    {
    calculator output(0);
     for (int i=0;i<n;i++)
      {
         output = output - obj1[i];
      }
      output.printmethod();
    }
    else if(select=="*")
    {
     calculator output(1);

      for (int i=0;i<n;i++)
      {
         output = output * obj1[i];
      }
      output.printmethod();
    }
    else if(select=="/")
    {
        calculator output(obj1[0]) ;
       for (int i=1;i<n;i++)
      {
         output = output/obj1[i] ;
         //output.printmethod();
      }
      output.printmethod();

    }
    else if(select=="%")
    {
      for (int i=0;i<n;i++)
      {
         output = output % obj1[i];
      }
      output.printmethod();
    }
    else if(select=="--")
    {
      for (int i=0;i<n;i++)
      {
         output = --obj1[i];
          output.printmethod();
      }

    }
      else if(select=="++")
      {
        for (int i=0;i<n;i++)
      {
         output =++obj1[i];
         output.printmethod();
      }



      }

}
