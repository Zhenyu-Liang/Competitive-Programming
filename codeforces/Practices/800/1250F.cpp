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
    
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i=1;i<=sqrt(n);++i) {
        if(n%i==0) {
            v.pb(i);
            v.pb(n/i);
        }
    }
    
    cout << 2*v[sz(v)-1]+2*v[sz(v)-2];

    return 0;
}

