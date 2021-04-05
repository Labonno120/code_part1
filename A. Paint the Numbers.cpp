#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()
{

    vector<ll>v;
    ll n,c=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());

    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(v[j]>0&&v[i]>0){
            if(v[j]%v[i]==0){
                v[j]=0;
            }
            }

        }

    }

    for(ll k=0;k<v.size();k++)
    {
        if(v[k]>0)
            c++;
        //cout<<c<<endl;
    }
    cout<<c<<endl;

}
