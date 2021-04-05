#include<stdio.h>
int main()
{
    int i,n,j,x[5],k;
    scanf("%d",&n);
     n=n+1;
    for(i=n;i>=1000;i++)
    {
      for(j=0;j<4;j++)
      {
        x[j]=n%10;
        n=n/10;

      }
       if(x[0]!=x[1]&&x[0]!=x[2]&&x[0]!=x[3]&&x[1]!=x[2]&&x[1]!=x[3]&&x[2]!=x[3])
       {
        printf("%d",i);
        break;
       }
       n=i;
       n++;


    }
}
