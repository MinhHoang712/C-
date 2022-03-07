#include<iostream>
#include<iomanip>
using namespace std;

void sum(int n)
{
    float S=0;
    for (int i=1;i<=n;i++)
    {
        S=S+i*i;
    }
    cout<<setprecision(2)<<fixed<<S<<endl;
}

int main()
{
    int n;
    cin>>n;
    sum(n);
}

