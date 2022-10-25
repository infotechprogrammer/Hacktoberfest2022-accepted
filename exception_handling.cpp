#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age for voting : "<<endl;
    cin>>age;
    try
    {
        if(age>0 && age<18)
        {
            throw 0;
        }
        else if(age > 110)
        {
            throw 'v';
        }
        else if(age <0)
        {
            throw 2.8;
        }
        else
        {
            cout<<"Elligible for voting";
        }
    }    
        catch(int i)
        {
            cout<<"Exception: Not elligible for voting";
        }  
        catch(...)
        {
            cout<<"Exception: Invalid age for voting"; 
        }
}
