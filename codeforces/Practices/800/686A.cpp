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
    
    ll a,ans1;
    cin >> a >> ans1;
    ll ans2=0;

    while(a--) {
        char op;
        ll m;
        cin >> op >> m;
        if(op=='+') {
            ans1+=m;
        } else {
            if(ans1<m) {
                ++ans2;
            } else {
                ans1-=m;
            }
        }

    }
    cout << ans1 << " " << ans2 << nl;

    return 0;
}

