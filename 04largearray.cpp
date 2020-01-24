#include<iostream>
using namespace std;
int main()
{
    int small,large, i, n;
    cout<<"enter the size of ur array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements for an array:\n";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<"the elements of an array are:";
    for(i=0;i<n;i++)
    {
    cout<<"\t"<<arr[i];
    }
    large=arr[0];
    small=arr[0];
    for(i=0;i<n;i++)
    {
        if(large<arr[i])
        {
           large=arr[i];
        }
    }
     for(i=0;i<n;i++)
    {
        if(small>arr[i])
        {
           small=arr[i];
        }
    }
    cout<<"\nthe largest element in the array is:"<<large;
    cout<<"\nthe smallest element in the array is:"<<small;
    return 0;

}
