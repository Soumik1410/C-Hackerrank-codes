#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int m,n;
    scanf("%d %d",&m,&n);
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%d %d\n",m+n,m-n);
    printf("%.1f %.1f\n",a+b,a-b);
    return 0;
}
