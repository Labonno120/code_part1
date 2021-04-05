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
        ll a=0,b=0,mx,c=0,b_s=0,b_e=0,mark=0;
       string s;
       cin>>s;
       if(s[0]==s[s.size()-1]){out_n;}
       else{
       for(ll i=0;i<s.size();i++)
       {









           if(s[i]=='A'){
                s[i]=='(';
              // if(b>0)b--;
//else if(c>0)c--;
//else
//a++;
           }
           else if(s[i]=='B')
           {
               s[i]=')';
               //if(a>0)a--;
               //else if(c>0)c--;
               //else b++;
           }
           //else cc++;
          // else {
          //  if(a>0)a--;
          //  else if(b>0)b--;
          //  else c++;
          // }
          // else c++;
//}

       }
       for(ll i=0;i<s.size();i++)
       {
           if(s[i]=='(')b_s++;
           else if(s[i]==')')
           {
               if(b_s>0)b_s--;
               else b_e++;
           }
           else{
              if(b_s>0){
                b_s--;
                if(mark!=1){
                for(ll i=0;i<s.size();i++)
                {
                    if(s[i]=='C')s[i]=')';
                }
                mark=1;
              }
              }
              else{
                if(mark!=1){

                for(ll i=0;i<s.size();i++)
                {
                    if(s[i]=='C')s[i]='(';
                }
              mark=1;
            c++;
              }
           }
       }
       if(a==0&&b==0&&c==0){out_y}
       else {out_n;}

    }
    }
}
}

