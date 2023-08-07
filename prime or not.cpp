#include<iostream>
using namespace std;

int main()
{
    cout << "Input number: ";
    int n;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        if(n%i==0) {
            cout<<"non prime"<<endl;
            break;
        }
        else
            cout<<"prime number"<<endl;
        break;
    }
    return 0;
}