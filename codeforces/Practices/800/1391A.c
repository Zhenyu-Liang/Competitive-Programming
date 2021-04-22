#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
typedef long long ll; 
void sw(int*a,int*b){int c=*a;*a=*b;*b=c;}



int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        for (int i=1;i<n+1;++i)
            printf("%d ", i);


        printf("\n");
    }

    return 0;
}


