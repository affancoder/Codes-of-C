#include<iostream>
using namespace std;

int main()
{
    int num,i,mul;

    cout<<"Enter any number: "<<endl;
    cin>>num;

    cout<<"the table of "<<num<<" are following"<<endl;
    for(i=1; i<=10; i++)
    {
        mul=num*i;

        cout<<" "<<mul<<endl;
    }
    return 0;
}