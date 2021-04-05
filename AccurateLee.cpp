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
    tc(t)
    {
        ll n,tm,o=0,z=0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='0'){
             tm=i;
             break;
            }
        }
        for(ll i=tm-1;i>=0;i--)
        {
            if(s[i]=='1')o++;
            if(s[i]=='0')z++;

        }
        z++;
        for(ll i=0;i<s.size();i++){
        if(s[i]=='1'&&i!=n-1&&o!=1&&s[i+1]=='0')
        {

            s.erase(s.begin()+i);
            o--;
        }
        else if(o==1&&s[i]==1)
        {
            for(ll j=0;j<s.size();j++)
            {
                if(z==1)continue;
                if(s[i]=='0')
                {
                    s.erase(s.begin()+j);
                    z--;
                }
            }
        }
    }
    cout<<s<<endl;;
    }

}



