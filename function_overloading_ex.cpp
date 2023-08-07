#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}

int main()
{
    cout<<"The sum of 9 & 2 is "<<sum(9,2)<<endl;
    cout<<"The subtraction of 8 & 3 is "<<sub(8,3)<<endl;
    return 0;
}