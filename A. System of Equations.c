#include <stdio.h>
#include <stdlib.h>
int main()
{
    int counts=0;
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i=0;i*i<=n;i++) {
        for (int j=0;j*j<=m;j++) {
            if (i*i+j==n && i+j*j==m) {
                counts++;
            }
        }
    }
    printf("%d",counts);
    return 0;
}
