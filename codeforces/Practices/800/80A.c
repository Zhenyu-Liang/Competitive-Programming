#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
typedef long long ll; 
void sw(int*a,int*b){int c=*a;*a=*b;*b=c;}

int ok(int n) {
    for (int i=2;i<n;i++) {
        if(n%i==0) {
            return 0;
        }
    }

    return 1;


}


int main() {
    int a, b;
    scanf("%d %d", &a, &b); 
    if(a == b)
        printf("YES");
    else {
        int i=a;
        while (i++) {
            if (ok(i)) {
                if (i==b) {
                    printf("YES");
                } else {
                    printf("NO");
                }

                break;
            }
        }
    }


    return 0;
}


