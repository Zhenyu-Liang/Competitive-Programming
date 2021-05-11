#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define sz(x) (int)(x).size()
#define pb push_back
#define sw swap
#define all(x) x.begin(),x.end()

const char nl = '\n';

// YAY:)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        ll a,b;
        cin >> a >> b;
        vector<ll> n(a);
        for(ll i=0;i<a;++i) {
            cin >> n[i];
        }
        
        ll ans=0;
        sort(all(n),greater<ll>());
        for(ll i=0;i<b+1;++i) {
            ans+=n[i]; 
        }

        cout << ans << nl;

    }

    return 0;
}

