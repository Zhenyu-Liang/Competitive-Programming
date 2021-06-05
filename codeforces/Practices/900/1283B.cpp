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
#define lcm(a,b) a*b/__gcd(a,b)

const char nl = '\n';

// YAY:)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--) {
        ld a,b;
        cin >> a >> b;
        ll ans = (ceil(b/2)*floor(a/b))+(floor(b/2)*ceil(a/b));
        if(ans>a||(ll)a%(ll)b==0)
            cout << (ll)a << nl;
        else
            cout << (ll)ans << nl;



         
    }

    return 0;
}

