#include<iostream>
using namespace std;
int main()
{
    int i,j,num, n1,n2,merged[100];
    cout<<"enter the size of 1st array:";
    cin>>n1;
    int arr1[n1];
    cout<<"\nenter the elements for 1st array:\n";
    for(i=0;i<n1;i++)
    {
    cin>>arr1[i];
    }
    cout<<"\nthe elements of 1st array are:";
    for(i=0;i<n1;i++)
    {
    cout<<"\t"<<arr1[i];
    }
     cout<<"\nenter the size of 2nd array:";
    cin>>n2;
    int arr2[n2];
    cout<<"\nenter the elements for 2nd array:\n";
    for(i=0;i<n2;i++)
    {
    cin>>arr2[i];
    }
    cout<<"\nthe elements of 2nd array are:";
    for(i=0;i<n2;i++)
    {
    cout<<"\t"<<arr2[i];
    }
     int n=n1+n2;
    for(i=0;i<n1;i++)
    {
        merged[i]=arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        merged[j+n1]=arr2[j];
    }

    cout<<"\nthe merged array is:";
    for(j=0;j<n;j++)
    {
        cout<<"\t"<<merged[j];
    }
    return 0;
}
