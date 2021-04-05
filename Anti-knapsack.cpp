#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    tc(t)
    {
        ll n ,m , sum=0 ;
        cin>> n >> m;
        ll tm=ceil( (float)m/2);
        cout<<m/2+(n-m)<<endl;
        for( ll i = tm; i < m ; i++)
            cout<<i<<" ";
        for( ll i = m+1; i <= n; i++)
            cout<<i<<" ";
            cout<<endl;

    }

}




