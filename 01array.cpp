#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"define your array size:";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements you want to store in a array:\n";
    for (i=01;i<n;i++)
    {
    cin>>arr[i];
    }
    for (i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }
    return 0;
}
