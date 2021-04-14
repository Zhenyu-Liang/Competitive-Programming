#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    int ans = 0;
    for(int j=0;j<n;j++)
        ans += arr[j]; 

    printf("%d", ans);
    free(arr);
    return 0;
}


