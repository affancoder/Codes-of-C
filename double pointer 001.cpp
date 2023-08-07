#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;

    cout<<endl<<"All Right";
    return 0;
}