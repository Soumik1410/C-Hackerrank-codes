//The algorithm to generate lexicographically ordered permuations of a string is given here : https://en.wikipedia.org/wiki/Permutation#Generation_in_lexicographic_order

/*
Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
Find the largest index l greater than k such that a[k] < a[l].
Swap the value of a[k] with that of a[l].
Reverse the sequence from a[k + 1] up to and including the final element a[n].
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int i,j;
void swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}
int next_permutation(int n, char **s)
{
    /**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    int i,j,index=-1;
    for(i=n-2;i>=0;i--)
    {
        if(strcmp(s[i],s[i+1])<0)
        {
            index=i;
            break;
        }
    }
   if(index==-1)
   return 0;
   for(i=n-1;i>index;i--)
   {
       if(strcmp(s[i],s[index])>0)
       break;
   }
   //printf("Original %s %s\n",s[index],s[i]);
   swap(&s[index],&s[i]);
   //printf("My output %s %s\n",s[i],s[index]);
   i=index+1; 
   j= n-1;
   while(i<j)
   {
       swap(&s[i],&s[j]);
       i++;
       j--;
   }
   return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
