#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j;
  int max_and = 0, max_or = 0, max_xor = 0;
  for(i=1;i<n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          int x = i&j;
          if(x>max_and && x<k)
            max_and=x;
          int y = i|j;
          if(y>max_or && y<k)
            max_or=y;
          int z = i^j;
          if(z>max_xor && z<k)
            max_xor=z;
      }
  }
  printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
