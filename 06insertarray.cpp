#include<iostream>
using namespace std;
int main()
{
    int i,num, n,pos;
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
    cout<<"\nenter the element to be inserted:";
    cin>>num;
    cout<<"\nenter the position for the element to be inserted:";
    cin>>pos;
    for(i=n;i>=(pos-1);i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    n=n+1;
    cout<<"\nthe array after the insertion of array is:";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }
    return 0;

}




