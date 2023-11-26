#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    double numerator=0.0;
    for (int i=0;i<n;i++) {
        int tmp;
        scanf("%d",&tmp);
        numerator+=tmp;
    }
    double denominator=n*1.0;
    double fraction=numerator/denominator;
    printf("%0.12lf\n",fraction);
    return 0;
}
