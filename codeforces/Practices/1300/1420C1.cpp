#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define ar array
#define vt vector
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define trav(a,b) for(auto &a:b)

#define sz(x) (int)(x).size()
#define pb push_back
#define sw swap
#define all(x) x.begin(),x.end()

const char nl = '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--) {
        ll a,b;
        cin >> a >> b;
        ll ans=0;
        vt<ll> n;
        FOR(i,0,a) {
            ll o;
            cin >> o;
            n.pb(o);
        }

        FOR(i,0,a) {
            if(n[i]>b) 
                ans+=n[i]-b;

            ans=max(n[i], ans);
            b=n[i];
        }

        cout << ans << nl;


    }

    return 0;
}

