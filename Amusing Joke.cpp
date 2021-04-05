#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>> s1;
    cin>> s2;

    s1=s1+s2;

    sort(s1.begin(),s1.end());
    cin>> s3;
    sort(s3.begin(),s3.end());
    if(s1==s3)
        cout<< "YES";
    else
        cout<< "NO";

}
