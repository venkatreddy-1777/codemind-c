#include<stdio.h>
int main()
{
    int n,l=0,r=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>l)
        {
            l=r;
        }
        n=n/10;
    }
    printf("%d
",l);
}