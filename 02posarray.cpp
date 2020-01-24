#include<iostream>
using namespace std;
int main()
{
    int n, i,num,pos=0,temp=0;
    cout<<"enter the size of ur array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements you want to store in a array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"\nenter the number whose position is to be searched:";
    cin>>num;
    for (i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            temp=1;
            pos=i+1;
            break;
        }
    }
        if(temp==0)
        {
            cout<<"number is not present in the list";
        }
        else
        {
            cout<<"position of "<<num<<" is "<< pos ;
        }

       return 0;
    }



