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
    ll n,i,j,rest=0,mx=INT_MIN;
    vector<ll>v;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(i);
    }
    for(i=0;i<n;i++)
        v.push_back(i);
    for(j=0,i=v[j];i<v.size();i++,j++)
    {
        if(a[i]==a[v[j+1]]&&a[i]==1)
            rest++;
        else
        {
            mx=max(mx,rest);
            rest=0;
        }
    }
    cout<<mx<<endl;


}
