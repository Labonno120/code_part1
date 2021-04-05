#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,x,i,mx=1,mn=1000,mx1=1,mn1=1000;
    cin>>n>>x;
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
        mx=max(mx,a[i]);
        mn=min(mn,b[i]);
        mx1=max(mx1,b[i]);
        mn1=min(mn1,a[i]);
    }
if(mx+mn<=x&&mx1+mn1<=x)
    cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;
    }
}
