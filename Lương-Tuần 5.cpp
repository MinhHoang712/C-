#include<iostream>

using namespace std;

int main()
{
    int salary;
    cin>>salary;

    if (salary<10000000)
    {
        cout<<salary;
    }
    else if (salary >=10000000 && salary<15000000)
    {
        cout<<0.1*salary<<endl;
        cout<<0.9*salary<<endl;
    }
    else if (salary >=15000000 && salary<30000000)
    {
        cout<<0.2*salary<<endl;
        cout<<0.8*salary<<endl;
    }
    else if (salary>=30000000)
    {
        cout<<0.3*salary<<endl;
        cout<<0.7*salary<<endl;
    }
    
    else
    {
        cout<<"Value Error!";
    }

}