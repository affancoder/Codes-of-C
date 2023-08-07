#include<iostream>
using namespace std;

int vol(int a)
{
    return(a*a*a);
}

int main()
{
    int a;
    cout<<"Calculating Volume of cube using function"<<endl;
    cout<<"\ninput any number: "<<endl;
    cin>>a;

    cout<<"The area of cube is "<<vol(a);
    return 0;
}