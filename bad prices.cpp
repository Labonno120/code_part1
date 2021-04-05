#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t, n,i,j,lower,k,count=0;
   cin>> t;
   for(i=0;i<t;i++)
   {
       cin>>n;
       int a[n+1];
       for(j=0;j<n;j++)
       {
           cin>> a[j];
       }
       lower=a[n-1];
       for( int k=n-2;k>=0;k--)
       {
            if(a[k]>lower)
                count++;
            else
                lower=a[k];

      }
     cout<< count<< endl;
     count=0;

   }


}
