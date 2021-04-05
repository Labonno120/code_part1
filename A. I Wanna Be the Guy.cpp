
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
    set<ll>s;
    ll n,lv1,lv2;
    cin>>n;
    ll p,q;
    cin>>p;
    while(p--){
        cin>>lv1;
        s.insert(lv1);
    }
    cin>>q;
    while(q--){
        cin>>lv2;
        s.insert(lv2);
    }
    if(s.size()==n)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!" <<endl;
}
