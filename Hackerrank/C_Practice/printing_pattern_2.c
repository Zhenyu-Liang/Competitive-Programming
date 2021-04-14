#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
    int ttt = 5;
    
    int n;
    scanf("%d", &n);
    int v=n;
    int t = n;
    int c=0;
    int tt[n];
    while(t!=0) {
        tt[c] = t;
        c++;
        t--;
    }
    
    int rtt[n];
    int rt = n;
    int rc = 0;
    while (rt--) {
        rtt[rc] = tt[rt];
        rc++;
    }
    
    for(int i = 0;i<n;i++) {
        for(int x = 0; x<n-v; x++)
        {   
            printf("%d ", tt[x]);
        }
        for(int j = 0; j < (2*v)-1; j++) 
        {   
            printf("%d ", v);
        }
        for (int y = v; y<n; y++) 
        {   
            printf("%d ", rtt[y]);
        }
        
        v--;
        printf("\n");
    }

    v = n; 
    int z = 2;  
    int ntt[sizeof(tt)/sizeof(tt[0])-1];
    int sc=n;
    for(int i=0;i<sizeof(ntt)/sizeof(ntt[0]);i++)
    {   
        ntt[i] = sc;
        sc--; 
    }
     
    for (int j = 0; j<n; j++){
        for(int i=0;i<=v-2;i++) {
            printf("%d ", ntt[i]);   
        }

        for (int x = 0; x<(2*z)-2; x++) {
            if(z==n+1) break;
            printf("%d ", z);
        }
         
        for (int y=z; y<n; y++) {
            printf("%d ", rtt[y]);
        }

        v--;
        z++;
        if (j!=n-1)
            printf("\n");
    }

      

    return 0;
    
}


