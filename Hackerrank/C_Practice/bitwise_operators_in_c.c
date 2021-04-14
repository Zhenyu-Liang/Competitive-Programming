#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    
    int n, k;
    scanf("%d %d", &n, &k);
    int mAnd = 0;
    int mOr = 0;
    int mXor = 0;
    
    for (int i=1;i<n;i++) {
        for(int j=i+1;j<n+1;j++){
            int a = i&j;
            int b = i|j;
            int c = i^j;
            if (a>mAnd && a<k)
                mAnd = a;
            if (b>mOr && b<k)
                mOr = b;
            
            if (c>mXor && c<k)
                mXor = c;
        }

    }
    
    printf("%d\n",mAnd);
    printf("%d\n",mOr);
    printf("%d\n",mXor);
    

    return 0;
}


