#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define sz(x) (int)(x).size()
#define pb push_back
#define sw swap
#define all(x) x.begin(),x.end()
#define vt vector

const char nl = '\n';

// YAY:)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ld a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    
    bool ok = false;

    for(ld i=c;i<=d;++i) {
        if(e*i>=a&&e*i<=b) {
            ok=true;break;
        }
    }
    
    cout << (ok?"YES":"NO");

    return 0;
}


