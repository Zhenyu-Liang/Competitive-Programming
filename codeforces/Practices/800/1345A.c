#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
typedef long long ll; 
void sw(int*a,int*b){int c=*a;*a=*b;*b=c;}



int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==1 || (a==2 && b==2) || b==1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}


