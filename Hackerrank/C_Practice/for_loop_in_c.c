#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int i;
    char *r[11] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (i=a;i<=b;i++)
        if(1<=i&&i<=9)
            printf("%s\n", r[i-1]);
        else if(i%2==0)
            printf("even\n");
        else
            printf("odd\n");
        
    return 0;
}


