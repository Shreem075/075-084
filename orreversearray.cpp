#include<iostream>
using namespace std;
int main()
{
    int i,j, n;
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
    cout <<"\nthe element in reverse order is:";
    for(i=(n-1);i>=0;i--)
    {
    cout<<"\t"<<arr[i];
    }
   return 0;
}
