#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
typedef long long ll; 
void sw(int*a,int*b){int c=*a;*a=*b;*b=c;}
int cnt(int a[],int l,int c){int o=0;for(int i=0;i<l;++i){if(a[i]==c)++o;}return o;}
int ind(int a[],int l,int c){for(int i=0;i<l;++i){if(a[i]==c)return i;}return-1;}

int fact(ll n) {
    ll ans=1;
    for (ll i=1;i<n+1;++i) {
        ans*=i;
    }

    return ans;

}


int main() {
    int a,b;
    scanf("%d %d", &a, &b); 
    printf("%d\n", fact(min(a,b)));

    return 0;
}


