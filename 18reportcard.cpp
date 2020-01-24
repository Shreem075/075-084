#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"number of subjects";
    cin>>n;
    int marks[n];
    cout<<"enter the marks in different subjects:\n";
    //cout<<"\teng\tnepali\tmath\tsocial\thealth";
    for(i=0;i<n;i++)
    {
    cin>>marks[i];
    sum=sum+marks[i];
    cout<<"\t"<<marks[i];
    }
    float perc= (sum/500.0)*100;
    cout<<"your grade is:";
    if(perc>80)
    {
        cout<<"grade A";
    }
    else if(perc>60 && perc<80)
    {
        cout<<"grade B";
    }
    else
    {
        cout<<"grade c";
    }
    return 0;
}
