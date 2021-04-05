#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll n,m,tm,c=0;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];

    }
    ll k=n-m;
    ll l=m-1;

    m--;
    tm=max(k,l);
    for(ll i=1;i<=tm;i++)
    {
        if(m+i<n&&m-i>=0)
        {
            if(a[m+i]==1&&a[m-i]==1)
                c+=2;
        }
        else
        {
            if(m+i<n&&a[m+i]==1)c++;
            else if(m-i>=0&&a[m-i]==1)c++;
        }

    }
    if(a[m]==1)c++;
    cout<<c<<endl;
}
