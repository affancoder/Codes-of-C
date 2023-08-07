#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a, b, sum, mul;
    char ch;
    cout<<"Press 1 for sum"<<endl;
    cout<<"Press 2 for multiplication"<<endl;
    cout<<"Press 3 for concatenation"<<endl<<endl;
    cout<<"Input your choice: "<<endl;
    cin>>ch;

    switch(ch)
    {
    case '1':

        cout<<"Enter two numbers: "<<endl;
        cin>>a>>b;
        sum = a + b;
        cout<<"Addition is "<<sum<<endl;
        break;

    case '2':
        cout<<"Enter two numbers: "<<endl;
        cin>>a>>b;
        mul = a * b;
        cout<<"Multiplication is "<<mul<<endl;
        break;

    case '3':
        string x = "Affan ";
        string y = "Asghar" ;
        string word = x+y;
        cout<<word<<endl;
        break;
    }
    return 0;
}
