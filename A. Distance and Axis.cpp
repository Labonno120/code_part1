#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--){
    ll n,k,tm;
    cin>>n>>k;
    if(k<=n)
    {
        if((n-k)%2==0)
            tm=0;
        else
            tm=1;
    }
    else
    {
        tm=abs(n-k);
    }
    cout<<tm<<endl;
    }
}
