#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;
    char b[101];
    char c[101];

    scanf("%c\n", &a);
    scanf("%s\n", b);
    scanf("\n");
    scanf("%[^\n]", c);
    printf("%c\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    return 0;                     
}


