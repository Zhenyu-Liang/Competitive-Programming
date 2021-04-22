#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef long long ll; 
void sw(int*a,int*b){int c=*a;*a=*b;*b=c;}
int min(int a,int b){return(a<b)?a:b;};
int max(int a,int b){return(a>b)?a:b;};


int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", min(min(a+b+c,2*a+2*b),min(2*a+2*c,2*b+2*c)));
    return 0;
}


