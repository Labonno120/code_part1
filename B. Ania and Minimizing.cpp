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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)cout<<s<<endl;
    else if(n ==1)cout<<0<<endl;
    else
    {
        for(ll i=0,j=0;i<n;i++)
        {


            if(s[i]!='1'&&i==0)
            {
                s[i]='1';
                j++;
            }
            else if(s[i]!='0'&&i>0)
            {
                s[i]='0';
                j++;
            }
            if(j==k)break;

        }
        cout<<s<<endl;
    }

}



