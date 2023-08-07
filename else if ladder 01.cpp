#include<iostream>
using namespace std;

int main()
{
    cout << "enter the amount: ";

    int saving;
    cin >>saving;

    if(saving>5000)
        cout<< "Graphics Card";

    else if(saving>2000)
        cout <<"Hardisk";
        
    else if(saving>1000)
        cout <<"socket";
    else
        cout <<"ram";
    return 0;
}