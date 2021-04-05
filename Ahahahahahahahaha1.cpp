#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,tumi=0,ami=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)tumi++;
            else ami++;
        }
        if(tumi>=ami)
        {
            cout<<n/2<<endl;
            for(ll i=0;i<n/2;i++)
            {
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else{
            if(n%4==0)
            {
            cout<<n/2<<endl;
            for(ll i=0;i<(n/2);i++)
                cout<<1<<" ";
            }
            else{
            cout<<n/2+1<<endl;
            for(ll i=0;i<(n/2+1);i++)
                cout<<1<<" ";
            }

            cout<<endl;
        }

    }
}
