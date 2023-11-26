#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    int counts=0;
    scanf("%s",str);
    int hashset[200]={0};
    for (int i=0;i<strlen(str);i++) {
        if (hashset[str[i]]==0) {
            hashset[str[i]]=1;
            counts++;
        }
    }
    if (counts%2==0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
