#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    int t, n;
    scanf("%d %d", &t, &n);
    int s[t][1100];
    while(n--) {
        int tt[3];
        scanf("%d", &tt[0]);
        int l;
        l=(tt[0]!=3) ? 3:2;
        for (int i=1;i<l;i++)
            scanf("%d", &tt[i]);
        
        int tt0 = tt[0];
        if(tt0==1) {
            for (int i=0;i<1100;i++) {
                if(s[tt[1]][i] == 0) {
                    s[tt[1]][i] = tt[2];
                    break;
                }

            }
        } else if (tt0==2) {
            printf("%d\n", s[tt[1]][tt[2]]);
        } else if (tt0 == 3) {
            int c=0;
            for (int j=0;j<1100;j++) {
                if (s[tt[1]][j]!=0)
                    c++;
            } 

            printf("%d", c);
                          
        }


           
    }        



    return 0;
}


