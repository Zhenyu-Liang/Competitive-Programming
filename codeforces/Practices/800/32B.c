#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define ll long long 

void sw(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;  
}


int main() {
    char s[200];
    scanf("%s", s);
    int i;
    for (int i=0;s[i];++i) {
        if (s[i]=='.')
            putchar('0');
        else if(s[++i] == '.')
            putchar('1');
        else
            putchar('2');
    }



    return 0;
}


