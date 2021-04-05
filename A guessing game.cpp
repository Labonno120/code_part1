#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    ll n,sum=0;
    cin>>n;
    ll a[n];
    loop(i,n)
    {
        cin>>a[i];
        if(a[i]>0)
            sum+=a[i];
    }
    cout<<sum<<endl;
}
