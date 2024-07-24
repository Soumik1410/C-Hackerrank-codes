/*
Sample Input 1

5

Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int line, col, col_limit;
    int num;
    for(line=1; line<n; line++)
    {
        num=n;
        for(col=1;col<=line;col++)
        {
            printf("%d ",num);
            --num;
        }
        int diff=n-line+1;
        for(col=1;col<=2*(n-line)-1;col++)
            printf("%d ",diff);
        for(col=1;col<=line;col++)
        {
            ++num;
            printf("%d ",num);
        }
        printf("\n");
    }
    for(col=1;col<=2*n-1;col++)
    {
        if(col<=n)
            printf("%d ",n-col+1);
        else {
            printf("%d ",col-n+1);
        }
    }
    printf("\n");
    for(line=n+1;line<=2*n-1;line++)
    {
        num=n;
        for(col=line;col<=2*n-1;col++)
        {
            printf("%d ",num);
            num--;
        }
        int diff=line-n+1;
        for(col=1;col<=2*(line-n)-1;col++)
        {
            printf("%d ",diff);
        }
        for(col=line;col<=2*n-1;col++)
        {
            ++num;
            printf("%d ",num);
        }
        printf("\n");
    }
    return 0;
}
