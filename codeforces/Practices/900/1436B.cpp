#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define sz(x) (int)(x).size()
#define pb push_back
#define sw swap
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vt vector
#define gcd __gcd
#define lcm(a,b) (a*b/__gcd(a,b))

const char nl = '\n';

// YAY:)
bool isp(int n) {
    if(n==1)
        return false;
    for(int i=2;i<=sqrt(n);++i) {
        if(n%i==0) {
            return false;
        }
    }

    return true;
}

int np(int n) {
    int i=1;
    while(1) {
        if(isp(n+i)&&!isp(i))
            return i;
        ++i;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans=np(n-1);
        for(int i=0;i<n;++i) {
            vt<int> tt(n,1);
            tt[i]=ans;
            for(int j=0;j<n;++j)
                cout << tt[j] << " ";
            cout << nl;
        }
    }

    return 0;
}

