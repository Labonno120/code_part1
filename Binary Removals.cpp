#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll mark=0,mark1=0,i;
        string s;
        cin>>s;
        string tm=s;
        sort(tm.begin(),tm.end());
        if(tm==s)cout<<"YES"<<endl;
        else{
        for( i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]&&s[i]=='1')
            {
                mark=1;
            }
            if(mark&&s[i]==s[i+1]&&s[i]=='0')
            {
                mark1=1;
                break;
            }
            }
            if(mark1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }


    }
}
