#include<iostream>
using namespace std;
int main()
{
    char s;
    cout<<"enter the alphabet:";
    cin>>s;
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
    {
        cout<<"the alphabet is vowel";
    }
    else
    {
        cout<<"it is not vowel";
    }
    return 0;
}
