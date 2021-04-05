#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,cnt=0,p;
    vector<int>vc;
    vector<int>:: iterator i;
    vector<int>:: reverse_iterator ri;
    cin>>n;
    while(n!=0)
    {
        p=n%2;
        n=n/2;
        vc.push_back(p);

    }
    for(int i=0;i<vc.size();i++)
    {
        if(vc[i]==1)cnt++;
    }
    for(ri=vc.rbegin();ri!=vc.rend();ri++)
    cout<<*ri;
    cout<<endl;
    cout<<cnt<<endl;

}
