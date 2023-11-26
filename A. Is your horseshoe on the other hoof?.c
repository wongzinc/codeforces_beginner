#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hashset[100001]={0};
    int uniqueCounts=0;
    long long int arr[15];
    for (int i=0;i<4;i++) {
        scanf("%lld",&arr[i]);
    }
    for (int i=0;i<4;i++) {
        if (hashset[arr[i]]==0) {
            hashset[arr[i]]=1;
            uniqueCounts++;
        }
    }
    printf("%d",4-uniqueCounts);
    return 0;
}
