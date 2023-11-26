#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    scanf("\n");
    char **arr=(char**)malloc(n*sizeof(char*));
    int **consecutiveCounts=(int**)malloc(n*sizeof(int*));

    for (int i=0;i<n;i++) {
        char *tmp=(char*)malloc(100*sizeof(char));
        scanf("%s",tmp);
        arr[i]=tmp;
        
        consecutiveCounts[i]=(int*)malloc(strlen(tmp)*sizeof(int));
    }

    for (int i=0;i<n;i++) {
        int len=strlen(arr[i]);
        for (int j=0;j<len;j++) {
            int k=0;
            if (arr[i][j]=='1') {
                int currentCounts=1;
                
                while (j<len-1 && arr[i][j]==arr[i][j+1]) {
                    currentCounts++;
                    j++;
                }
                consecutiveCounts[i][k++]=currentCounts;
            }
        }
    }
    for (int i=0;i<n;i++) {
        int len=strlen(arr[i]);
        for (int j=0;j<len;j++) {
            printf("%d ",consecutiveCounts[i][j]);
        }
        printf("\n");
    }
    return 0;
}
