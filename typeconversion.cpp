#include<iostream>
using namespace std;
class time
{
    private:
    int hours, mins;
    public:
    time(int m)
    {
        hours=m/60;
        mins=m%60;
    }
    void show()
    {
        cout<<"Times in hours & minutes= "<<hours<<" : "<<mins;
    }
};
int main()
{
int minutes=90;
time t1=minutes;
t1.show();
}
