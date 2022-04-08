#include<iostream>
#include<cmath>
using namespace std;
class func_overload
{
    public:
    int i;
    int a[10];
    public:
    int func(int x)
    {
        for ( i=0;i<x;i++)
        {
            a[i]=i+1;
            cout<<a[i];
        }
        a[i]=i+1;
        cout<<a[i]<<endl;
        return 0;
    }
    int func(int* x,int *y)
    {
        *x=*x+*y;
        *y=*x-*y;
        *x=*x-*y;
        return 0;
    }
    int func(float x,float y)
    {
        i=fmod(x,y);
    }
};
int main()
{
    int a=32,b=7;
    func_overload obj1;
    obj1.func(5);
    obj1.func(& a,& b);
    cout<<a<<endl<<b;
    obj1.func(8.9, 2.3);
}