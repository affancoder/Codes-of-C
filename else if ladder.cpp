#include<iostream>
using namespace std;

int main()
{
    cout << "Enter any character: ";
    char ch ;
    cin>>ch;

    if(ch=='a')
        cout<<"hello"<<endl;
    else if(ch=='b')
        cout<<"hola"<<endl;
    else if(ch=='c')
        cout<<"namaste"<<endl;
    else
        cout<<"invalid character"<<endl;
    return 0;
}