#include<iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}

int main()
{
    int x, y;

    cout<<"input first number: "<<endl;
    cin>>x;
    cout<<"input second number: "<<endl;
    cin>>y;

    cout <<"The sum is "<<add(x,y);
    return 0;
}