#include<iostream>
using namespace std;

int a=20;
int main()
{
    int a = 7;
    cout <<"The local variable is "<<a<<endl;
    cout<<"The global variable is "<<::a<<endl;
    return 0;
}