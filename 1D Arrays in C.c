//Dynamic 1D Array in C demonstration
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int *a = (int *)malloc(sizeof(int)*1000);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("%d",sum); 
    free(a);
    return 0;
}
