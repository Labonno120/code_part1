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

    ll x;
    cin>>x;
    if(x%4==1)
        cout<<0<<" "<<"A"<<endl;
    else if(x%4==2)
    {
        cout<<1<<" "<<"B"<<endl;
    }
    else if(x%4==3)
    {
        cout<<2<<" "<<"A"<<endl;
    }
    else
    {
        cout<<1<<" "<<"A"<<endl;
    }
}


