#include<iostream>
using namespace std;

int main()
{
    cout << "Enter any two number\n";
    int a, b;
    cin>>a>>b;

    int sum =a+b;
    int product =a*b;
    int average =(a+b)/2;
    {
        printf("sum is %d\nproduct is %d\naverage is %d",sum, product, average);
    }
    return 0;
}