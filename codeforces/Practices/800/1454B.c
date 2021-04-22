#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
typedef long long ll; 



int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        ll a[n+1], b[n+1];
        a[n] = 200003;
        for (int i=0;i<n;++i) {
            scanf("%lld", &a[i]);
            b[i]=0;
        }

        b[n] = 0;
         
        for (int i=0;i<n;++i) {
            ++b[a[i]];
        }
        
        int ans = n+1;
        for(int i=0;i<n;++i) {
            if(b[a[i]]==1 && a[i]<a[ans]) {
                ans = i;  
            }
        }

        printf("%d\n", (ans==n+1)?-1:ans+1);

    }     
    return 0;

}


