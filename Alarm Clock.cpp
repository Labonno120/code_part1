    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
      int t;
      cin>>t;
      while(t--)
      {
        long long int a,b,c,d,ct=0,x;
        cin>>a>>b>>c>>d;
        if(b<a&&c>d)
        {
         if((a-b)%(c-d)==0)
         x= ((a-b)/(c-d));
         else
         x= ((a-b)/(c-d))+1;
         cout<<b+(x*c)<<endl;
         //cout<<x<<endl;
        }
        else if(b>=a)
        cout<<b<<endl;
        else
        cout<<"-1"<<endl;

      }
    }
