#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int cnt_A=0,cnt_B=0;
        cin>>s;
        loop(i,s.size())
        {
            if(s[i]=='A')cnt_A++;
            else
            {
                if(s[i]=='B'&&cnt_A>0)
                    cnt_A--;
                else if(s[i]=='B'&&cnt_B>0)
                    cnt_B--;
                else cnt_B++;
            }
        }
        cout<<cnt_A+cnt_B<<endl;
    }
}
