#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ct=0,p;
        cin>>n;
        p=n/2;
        for(;;){
        ct+=((n-1)*4)*p;
        //cout<<"ct="<<ct<<endl;
        if(n<2)break;
        n--;p--;
        }
        cout<<ct<<endl;
    }
}
