#include<iostream>
using namespace std;
int main()
{
    int n,j,sum=0;
    string s;
    cin>> n;
    int a[n+1];
    for(j=0;j<n;j++)
    {
        cin>>s;
        if(s[0]=='T')
            a[j]=4;
        else if(s[0]=='C')
            a[j]=6;
        else if(s[0]=='O')
            a[j]=8;
        else if(s[0]=='D')
            a[j]=12;
        else if(s[0]=='I')
            a[j]=20;
    }

    //for(j=0;j<n;j++)
    //cout<<a[j]<<endl;
    for(j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    cout<< sum;
}
