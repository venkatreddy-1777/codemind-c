#include<stdio.h>
int main()
{
    int n,i,p;
    p=0;
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        p=p+i;
    }
    printf("%d",p);
}