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
        string s;
        cin >> s;
        string a="";
        int ok=0;
        for(int i=0;i<n;++i) {
            if(a.find(s[i])<a[sz(a)-1]&&a[sz(a)-1]!=s[i]) {
                cout << "NO" << nl; ok=1;break;
                
            }

            a+=s[i];
        }

        if(ok==0)
            cout << "YES" << nl;

    }

    return 0;
}

