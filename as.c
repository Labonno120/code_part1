#include<stdio.h>
int main()
{
    char ch=' ';
    while(ch!='\n')
    {
        ch=getchar();
    }

    printf("%s",ch);
}
