#include<iostream>
#include<conio.h>
using namespace std;
class B
{
    protected:
    int x,y;
    public:
    void assign()
    {
        x=20;
        y=10;
    }
};
class D1:public B
{
    int sum;
    public:
    void add()
    {
        sum=x+y;
        cout<<" Sum is = "<<sum<<endl;
    }
};
class D2:public B
{
    int sub;
    public:
    void minus()
    {
        sub=x-y;
        cout<<" Subtraction is = "<<sub<<endl;
    }
};
class D3:public B
{
    int m;
    public:
    void mul()
    {
        m=x*y;
        cout<<" Multiplication is = "<<m<<endl;
    }
};
int main()
{
    D1 d1;
    D2 d2;
    D3 d3;
    d1.assign();
    d1.add();
    d2.assign();
    d2.minus();
    d3.assign();
    d3.mul();
    getch();
}
