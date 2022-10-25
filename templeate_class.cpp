#include<iostream>
using namespace std;
// int min(int a, int b)
// {
//     return(a<b)?a:b;
// }
// float min(float a, float b)
// {
//     return(a<b)?a:b;
// }
// Now instead of using above multiple functions we will use templates

//Below iplemented template according to its syntax
template<class T>
T min(T &a, T &b) //or void min(T &a, T &b)
{
    return(a<b)?a:b;
}

int main()
{
    int x,y;
    cout<<"Enter Integer Values"<<endl;
    cin>>x>>y;
    cout<<"Minimum numbers of Integers"<<endl;
    cout<<min(x,y);
    float p,q;
    cout<<"\nEnter Float Values"<<endl;
    cin>>p>>q;
    cout<<"Minimum numbers of Floats"<<endl;
    cout<<min(p,q);
    // char c1,c2;
    // cout<<"Enter Character Values"<<endl;
    // cin>>c1>>c2;
    // cout<<"Minimum numbers of Character"<<endl;
    // cout<<min(c1,c2);
}

//Template using different types in same function defination
// #include<iostream>
// #include<conio.h>
// using namespace std;

// template<class T1 , class T2>
// void min(T1 &a, T2 &b) //or void min(T &a, T &b)
// {
//     if(a<b)
//     {
//         cout<<"Minimum Value:"<< a;
//     }
//     else
//     {
//         cout<<"Minimum Value:"<< b;    
//     }
    
// }
// int main()
// {
//     int x; float y;
//     cout<<"Enter Integer Value"<<endl;
//     cin>>x;
//     cout<<"Enter Float Value"<<endl;
//     cin>>y;
//     min(x,y);
// }
