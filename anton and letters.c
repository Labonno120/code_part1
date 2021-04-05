#include<iostream>
using namespace std;
int main()
{
    string s;
    int count=0,i;
    getline(cin,s);
    for(i=1;i<s.size();i+=3)
    {
        if(s[i]!=s[i+1])
            count++;
    }
    cout<< count<<endl;
}
