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
      ll n,mark=0;
      cin>>n;
      string s;
      cin>>s;
      if(n&1)
      {
          for(ll i=0;i<n;i+=2)
          {
              if((s[i]-'0')%2==1)
              {
                  mark=1;
                  break;
              }

          }
          if(mark==1)
            cout<<"1"<<endl;
          else cout<<"2"<<endl;
      }
      else
      {
          for(ll i=1;i<n;i+=2)
          {
              if((s[i]-'0')%2==0)
              {
                  mark=1;
                  break;
              }

          }
          if(mark==1)
            cout<<"2"<<endl;
          else cout<<"1"<<endl;
      }
  }
}
