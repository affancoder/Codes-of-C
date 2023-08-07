#include<iostream>
using namespace std;

int main()
{
    cout << "enter the number: ";
    int n;
    cin>>n;

    int i=1;
    int sum=0;

    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"the sum is "<<sum<<endl;
    return 0;
}