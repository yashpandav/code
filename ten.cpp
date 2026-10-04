#include <iostream>
using namespace std;

int rotLeft(int arr[],int n,int d)
{
    int temp;
    d=d%n;

    for(int j=0;j<d;j++)
    {
        temp=arr[0];

        for(int i=0;i<n-1;i++)
            arr[i]=arr[i+1];

        arr[n-1]=temp;
    }

    return 0;
}

int rotRight(int arr[],int n,int d)
{
    int temp;
    d=d%n;

    for(int j=0;j<d;j++)
    {
        temp=arr[n-1];

        for(int i=n-1;i>0;i--)
            arr[i]=arr[i-1];

        arr[0]=temp;
    }

    return 0;
}

int main()
{
    int n,d;
    char ch;

    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>d;
    cin>>ch;

    if(ch=='L')
        rotLeft(arr,n,d);
    else
        rotRight(arr,n,d);

    for(int i=0;i<n;i++)
    {
        if(i>0)
            cout<<" ";

        cout<<arr[i];
    }

    return 0;
}
