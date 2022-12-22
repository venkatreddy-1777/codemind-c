#include<stdio.h>
int main()
{
    int n,subract,product=1,sum=0,k;
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        product*=n%10;
        n/=10;
        k=product-sum;
    }
    printf("%d",k);
}