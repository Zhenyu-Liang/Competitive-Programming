#include <stdio.h>
#include <stdlib.h>


int main() {
    int a,b;
    double c,d;
    scanf("%d %d", &a, &b);
    scanf("%lf %lf", &c, &d);
    printf("%d ", a + b);
    printf("%d\n", a - b);
    printf("%.1f ", c + d);
    printf("%.1f\n", c - d);
    return 0;                
}



