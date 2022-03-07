#include<iostream>
#include<iomanip>
using namespace std;

void sum(int n)
{
    float S=1;
    for (int i=1;i<=n;i++)
    {
        S=S+(1.0/(2*i+1));
    }
    cout<<setprecision(2)<<fixed<<S<<endl;
}

int main()
{
    int n;
    cin>>n;
    sum(n);
}

