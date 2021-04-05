#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=(n+1)-a[i];
    }
    for(ll i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

}
