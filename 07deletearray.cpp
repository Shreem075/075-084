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
    cout<<"\nthe elements of an array are:";
    for(i=0;i<n;i++)
    {
    cout<<"\t"<<arr[i];
    }
    cout<<"\nenter the element position to be deleted:";
    cin>>pos;
    if(pos<0 && pos>n)
    {
        cout<<"Invalid position!!!";
    }
    for(i=(pos-1);i<n;i++)
    {
        arr[i]=arr[i+1];
        n--;
    }
    cout<<"\nthe array after deletion is:";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }
        return 0;
}

