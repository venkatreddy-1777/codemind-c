#include<stdio.h>
int main()
{
    int n;
    float k=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    k+=arr[i];
    float f;
    f=k/n;
    printf("%.2f",f);
}