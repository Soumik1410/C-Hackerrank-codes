//Function pointers, strcmp std library function demonstration, basic sorting by selection
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    if(strcmp(a,b)>0)
        return 1;
    else {
        return 0;
    }
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    if(strcmp(b,a)>0)
        return 1;
    else {
        return 0;
    }
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    
    int countA[26] = {0};
    int distinctA = 0;
    for(int i = 0; a[i] != '\0'; i++){
        if(countA[a[i] - 'a'] == 0){
            distinctA++;
            countA[a[i] - 'a'] = 1;                        
        }
    }
    int countB[26] = {0};
    int distinctB = 0;
    for(int i = 0; b[i] != '\0'; i++){
        if(countB[b[i] - 'a'] == 0){
            distinctB++;
            countB[b[i] - 'a'] = 1;                        
        }
    }
    if(distinctA>distinctB){
        return 1;
    }
    else if (distinctA<distinctB){
        return 0;
    }    
    else{
        if(strcmp(a, b)>0)
            return 1;
        else {
            return 0;
        }        
    }
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a)<strlen(b))
        return 0;
    else if(strlen(a)>strlen(b))
        return 1;
    else
    {
        if(strcmp(a,b)>0)
            return 1;
        else {
            return 0;
        }
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i,j,pos;
    char * str = (char *)malloc(sizeof(char)*2600);
    for(i=0;i<len;i++)
    {
        str=arr[i];
        pos=i;
        for(j=i+1;j<len;j++)
        {
            if(cmp_func(str,arr[j]))
            {
                str=arr[j];
                pos=j;
            }
        }
        char * temp=(char *)malloc(sizeof(char)*2600);
        temp=arr[i];
        arr[i]=str;
        arr[pos]=temp;
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
