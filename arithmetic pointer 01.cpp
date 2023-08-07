#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"input number: ";
    cin>>num;

    int *ptr=&num;

    num=num-1;
    cout<<"after decreasing "<<num <<endl;

    num=num+1;
    cout<<"after increasing "<<num <<endl;

    num=num*7;
    cout<<"after multiplication "<<num<<endl;

    num=num/10;
    cout<<"after division "<<num<<endl;

    return 0;
}