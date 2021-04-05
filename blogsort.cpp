#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n,greater<int>());
        for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
        cout<<endl;

    }
}
