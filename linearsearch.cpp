#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<"index number of element is: "<<endl;
            return i;
        }
    }
    return -1;
}
int main()
{
    cout<<"Input the Size of Array: "<<endl;
    int n;
    cin>>n;

    int arr[n];
    cout<<"Input the elements of Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"input the number to be search 🔍: "<<endl;
    cin>>key;

    cout<<linearsearch(arr,n,key);

    return 0;
}