#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b) < 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(a, b) >= 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int ha[128] = {0}; 
    int cA = 0;
    for (int i=0; i<strlen(a);++i)
        ha[a[i]] = 1;
    for (int i=0; i<128; ++i)
        cA+=ha[i];

    int hb[128] = {0};
    int cB = 0;
    for (int i=0; i<strlen(b);++i)
        hb[b[i]] = 1;
    for (int i=0; i<128; ++i)
        cB+=hb[i];
    
    if(cB > cA)
        return 1;
    else if(cB < cA)
        return 0;
    else 
        if (strcmp(a, b) < 0)
            return 1;
        else
            return 0;
       
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a)>strlen(b))
        return 0;
    else if (strlen(a)<strlen(b))
        return 1;
    else {
        if(strcmp(a, b) < 0)
            return 1;
        else
            return 0;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int ok;
    for(int j=0;j<len;++j) {
        ok = 0;
        for (int i=1; i<len-j;++i) {
            if(cmp_func(arr[i], arr[i-1]) == 1) {

                ok=1;
                char *t = (char*)malloc(2500*sizeof(char));
                strcpy(t, arr[i]);
                t = (char*)realloc(t, strlen(t) * sizeof(char));
                arr[i] = arr[i-1];
                arr[i-1] = t;
            }
        }

        if(!ok) {
            break;
        } 
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
}
