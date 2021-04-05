#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    string a,b;
    map<string,string>mmm;

    while(m--){
        cin>>a>>b;
        mmm[a]=b;
        cout<<"mmm[a]="<<mmm[a]<<endl;
        cout<<"b="<<b<<endl;
        cout<<"a="<<a<<endl;
    }
    while(n--){
        cin>>a;
        cout<<"a2"<<a<<endl;
        cout<<(mmm[a].size()<a.size()?mmm[a]:a)<<" ";
    }
    return 0;
}
