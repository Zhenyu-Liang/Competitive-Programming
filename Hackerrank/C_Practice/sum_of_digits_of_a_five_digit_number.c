#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    int ans = 0;
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i<5; i++)
    {
        ans+=n%10;
        n/=10;
    }
    printf("%d", ans);

    return 0;
}


