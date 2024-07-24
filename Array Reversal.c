#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int j=0, k=num-1;
    while(j<k)
    {
        arr[j]=arr[j]+arr[k];
        arr[k]=arr[j]-arr[k];
        arr[j]=arr[j]-arr[k];
        j++;
        k--;
    }
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    free(arr);
    return 0;
}
