#include<iostream>
#include<iomanip>
#include <math.h>

using namespace std;

void sum(float x,int n)
{
    float S=0;
    for (int i=1;i<=n;i++)
    {
        S=S+pow(x,i);
    }
    cout<<setprecision(2)<<fixed<<S<<endl;
}

int main()
{
    int n;
    float x;
    cin>>n>>x;
    sum(x,n);
}

