#include<iostream>
using namespace std;

float average(float x, float y, float z)
{
    return (x+y+z)/3;
}

int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    float average_score = average(x,y,z);
    if (average_score >=8 && average_score<10)
    {
        cout<<"A";
    }
    else if (average_score >=6 && average_score<8)
    {
        cout<<"B";
    }
    else if (average_score >=4 && average_score<6)
    {
        cout<<"C";
    }
    else if (average_score<4 && average_score>=0) 
    {
        cout<<"D";
    }
    else
    {
        cout<<"Value Error!";
    }

}