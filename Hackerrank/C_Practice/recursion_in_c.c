#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int f(int n, int a, int b, int c) {
    if (n==1)
        return a;
    else if (n==2) 
        return b;
    else if (n==3)
        return c;
    else
        return f(n-1,a,b,c)+f(n-2,a,b,c)+f(n-3,a,b,c);

}


int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = f(n,a,b,c);
    printf("%d", ans);

    return 0;
}


