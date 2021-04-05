#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,count_0,count_1;
    string s;
    cin>>t;
    while(t--)
    {
        int count_0=0,count_1=0;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                count_0++;
            else
                count_1++;
        }
        //cout<<min(count_0,count_1)<<endl;
        if(min(count_0,count_1)%2!=0)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
}
