#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    char *n = (char *)malloc(1000*sizeof(char));
    fgets(n, 1000, stdin);
    int szn = strlen(n);
    n = (char*)realloc(n, szn*sizeof(char));
    for (int i=0;i<szn;i++) {
        if (n[i]!=' '){
            printf("%c", n[i]);
        }else{
            printf("\n");
        }
    }

        

    return 0;
}


