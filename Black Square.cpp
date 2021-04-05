#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5],i,sum=0,j,len;
    string s;

    for(i=0;i<4;i++)
    {
        cin>>ar[i];
    }
    cin>> s;
    len=s.size();
    int pos;
    for(j=0;j<len;j++)
    {
        if(s[j]=='1')
        sum+=ar[0];
        else if(s[j]=='2')
        sum+=ar[1];
        else if(s[j]=='3')
        sum+=ar[2];
        else
        sum+=ar[3];

    }
    cout<<sum<<endl;
}
