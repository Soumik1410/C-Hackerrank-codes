#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s)+1);
    int arr[10];
    int i;
    for(i=0;i<10;i++)
        arr[i]=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=48 && s[i]<=57)
            arr[s[i]-48]++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    free(s);
    return 0;
}
