#include<iostream>
using namespace std;

inline int MAX(int x,int y)
{
    return (x>y)?x:y;

}
int main()
{
    cout <<"MAX(20,10): "<<MAX(20,10)<<endl;
    cout <<"MAX(0,200): "<<MAX(0,200)<<endl;
    cout <<MAX(90,10)<<endl;
    cout <<MAX(60,120)<<endl;

    return 0;
}