#include<stdio.h>
int main()
{

   long long int n,i,count=0,cnt=0;

    char str[100001];
    scanf("%lld",&n);
    scanf("%s",&str);

    for(i=0;i<n;i++)
    {
        if(str[i]=='A')
            count++;
       else if(str[i]=='D')
            cnt++;
    }

    if(count>cnt)
        printf("Anton");
    else if(cnt>count)
        printf("Danik");
    else
        printf("Friendship");
}
