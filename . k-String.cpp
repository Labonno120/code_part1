#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll k,mark=0,mn=1100;
    map<char,ll>mp;
    cin>>k;
    string s,ss;
    cin>>s;
    string tmp=s;
    sort(s.begin(),s.end());
    int sz=unique(s.begin(),s.end())-s.begin();
    for(ll i=0;i<tmp.size();i++)
    {
        mp[tmp[i]]++;
    }

    for(ll i=0;i<sz;i++)
    {
        ss+=s[i];
       // mn=min(mn,mp[s[i]]);
        if(mp[s[i]]%k!=0){

            mark=1;

        }



    }
    //cout<<ss<<endl;
    // cout<<mn<<endl;

    if(!mark)
    {
        for(ll l=0;l<k;l++){
        for(ll i=0;i<ss.size();i++)
        {
            for(ll j=0;j<(mp[ss[i]]/k);j++)
                cout<<ss[i];
        }

    }
    cout<<endl;
    }


    else  cout<<-1<<endl;




}
