#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    char *n = (char*)malloc(1000*sizeof(char));
    scanf("%s", n);
    int len = strlen(n);
    n = realloc(n, len*sizeof(char));
    char a[] = "0123456789";
    for(int i=0;i<10;i++) {
        int c=0;
        for (int j=0;j<len;j++) {
            if(n[j]==a[i])
                c++;
        }
        printf("%d ", c);
    }




    return 0;
}


