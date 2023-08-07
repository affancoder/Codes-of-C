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
int pro(int a,int b)
{
    return a*b;
}
int division(int a,float b)
{
    return a/b;
}
int main()
{
    cout<<"The sum of 9 & 2 is "<<sum(9,2)<<endl;
    cout<<"The subtraction of 8 & 3 is "<<sub(8,3)<<endl;
    cout<<"The product of 5 & 8 is "<<pro(5,8)<<endl;
    cout<<"The division of 6 & 3 is "<<division(6,5)<<endl;
    return 0;
}