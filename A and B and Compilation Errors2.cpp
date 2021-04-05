#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p=0,q=0,r=0;
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p+=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        cin>>b[i];
        q+=b[i];
    }
    for(i=0;i<n-2;i++)
    {
        cin>>c[i];
        r+=c[i];
    }
    cout<<p-q<<endl;
    cout<<q-r<<endl;
}
