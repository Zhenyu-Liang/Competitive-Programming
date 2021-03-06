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
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;++i)
            cin >> v[i];

        int ans=0;
        int c=1;
        for(int i=1;i<n;++i) {
            if(v[i]==v[i-1])
                ++c;
            else {
                ans=max(c,ans);
                c=1;
            }
        }

        ans=max(c,ans);
        cout << ans << nl;

    }

    return 0;
}

