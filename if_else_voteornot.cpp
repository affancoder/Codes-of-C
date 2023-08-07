#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Input your age: "<<endl;
    cin>>age;

    if(age>18)
    {
        cout<<"You can vote!"<<endl;
    }
    else if(age<13 && age>18)
    {
        cout<<"You are a teenager, You can not vote"<<endl;
    }
    else
    {
        cout<<"You are a kid , You cannot vote" <<endl;
    }
    return 0;
}