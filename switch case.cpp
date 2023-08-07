#include<iostream>
using namespace std;

int main()
{
    int first, second ;
    cout << "input first number: ";
    cin>>first;

    cout<<"input second number: ";
    cin>>second;

    char op;
    cout<<"input operator: ";
    cin>>op;

    switch(op)
    {
    case'+':
        cout<<first+second<<endl;
        break;

    case'-':
        cout<<first-second<<endl;
        break;

    case'*':
        cout<<first * second<<endl;
        break;

    case'/':
        cout<<first / second<<endl;
        break;

    default:
        cout<<"input valid operator";
        break;
    }
    return 0;
}