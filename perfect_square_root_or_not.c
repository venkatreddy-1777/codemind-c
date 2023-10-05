#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq;
    float d;
    scanf("%d",&n);
    d=sqrt(double(n));
    sq=d;
    if(sq==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}