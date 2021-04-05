#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    tc(t)
    {
        ll a,b,m=0;
        string s1,s2,s3,s;
        cin>>s1>>s2;

     //   if(m==1){cout<<"-1"<<endl;}
       // else{
      // cout<<s1/s2;
                a=s1.size();
                b=s2.size();
            //cout<<a<<" "<<b<<endl;
            ll lcm=a*(b/(__gcd(a,b)));
            ll tm=lcm/a;
            ll tm1=lcm/b;
           // cout<<lcm<<endl;
            loop(i,tm)
            {
                s+=s1;
               // cout<<s1;
            }
            loop(i,tm1)
            {
                s3+=s2;
            }
            loop(i,s3.size())
            {
                if(s3[i]!=s[i])m=1;
            }
            if(m==1)cout<<-1<<endl;
            else{
                cout<<s3<<endl;
            }
        //}
    }
}
