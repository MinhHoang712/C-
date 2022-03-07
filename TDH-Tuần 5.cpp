#include<iostream>
using namespace std;

float sum(float x, float y, float z)
{
    return (x+y+z);
}

int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    float sum_score = sum(x,y,z);
    float mark;
    cin>>mark;
    if (sum_score >=mark)
    {
        cout<<"Pass";
    }
    else
    {
        cout<<"Fail";
    }

}