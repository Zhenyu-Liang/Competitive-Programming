#include <stdio.h>
#include <stdlib.h>

int max(int a[4]) {
    int ans = 0;
    int i;
    
    for (i = 0; i<4; i++)
        if(a[i]>ans)
            ans=a[i];

    return ans;

}


int main() {
    int i; 
    int a[4];
    for(i=0;i<4;i++)
        scanf("%d", &a[i]);

    int m=max(a);
    printf("%d\n", m);

    return 0;
}


