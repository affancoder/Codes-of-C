#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    int a = 4;
    int b = 6;

    bool first (a==b);
    cout<<first<<endl;

    bool second (a<b);
    cout<<second<<endl;

    bool third (a!=b);
    cout<<third<<endl;
    return 0;
}