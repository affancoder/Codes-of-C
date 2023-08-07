#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"input number: ";
    cin>>num;

    int *ptr=&num;

    cout<<"before "<< num <<endl;

    (*ptr)++;

    cout<<"after "<< num <<endl;
    return 0;
}