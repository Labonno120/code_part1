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

    string s;
    ll n,r,sf=0,fs=0,ss=0,ff=0;
    cin>>n;
    cin>>s;
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]=='S'&&s[i+1]=='F')
            sf++;
        else if(s[i]=='S'&&s[i+1]=='S')
            ss++;
        else if(s[i]=='F'&&s[i+1]=='S')
            fs++;
        else ff++;


    }
    //cout<<sf<<" "<<fs<<endl;
    ll ans=max(fs,sf);
    if(sf==fs)
    cout<<"NO"<<endl;
    else if(ans==sf)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}

