#include <stdio.h>
#include <stdlib.h>

int min2(int a,int b)
{
    return (a<b)?a:b;
}

int min3(int a,int b,int c)
{
    return min2(a,min2(b,c));
}

int main()
{
    int k2,k3,k5,k6;
    scanf("%d %d %d %d",&k2,&k3,&k5,&k6);
    int maxsum=0;
    maxsum+= min3(k2,k5,k6)*256 + min2(k2-min3(k2,k5,k6),k3)*32;
    printf("%d",maxsum);
    return 0;
}
