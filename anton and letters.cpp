#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0,i,k,l,sm,p;
    getline(cin,s);
    l=s.size();
    sort(s.begin(),s.end());
    //cout<< s<< endl;

    sm=l/3;
    for(i=l-sm-2;i<=l-2;i++)
    {

        if(s[i]==s[i+1])
        {
         count++;
         //p=i;
         }

    }

    k=sm-count;
    cout<< k<<endl;
    //cout<< s.size()<< endl;
    //cout<< count<< endl;

    //cout<<p;
}
