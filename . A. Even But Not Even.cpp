
#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define tc(t) int t;cin>>t;while(t--)
using namespace std;

string s;

int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    tc(t)
    {
        ll n,odd=0,c=0;
        cin>>n;
        //ll v[n];

        cin>>s;
        for(ll i=0;i<n;i++)
        {
            if(s[i]%2){
odd++;
            }
        }
        if(odd<2){
            cout<<"-1";
            goto end;
        }
        if(odd%2)
        {
        for(ll i=0;i<n;i++)
        {
            if(s[i]%2){
                    if(c==odd-1)break;
            cout<<s[i];
            c++;
            //cout<<"#"<<c<<endl;

            }
        }

        }
        else
        {
        for(ll i=0;i<n;i++)
        {
            if(s[i]%2){
            cout<<s[i];

            }
        }
        }
        end:
        cout<<endl;

    }
}

