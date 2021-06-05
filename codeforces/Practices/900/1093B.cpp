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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;

    while(t--) {
        string n;
        cin >> n;
        char a=n[0];
        if(a!=n[sz(n)-1])
            cout << n << nl;
        else {
            bool found=false;
            for(int i=1;i<sz(n);++i) {
                if(n[i]!=a) {
                    char b=n[i];
                    n.erase(n.begin()+i);
                    found=true;
                    n+=b;
                    break;
                }
            }

            if(!found)
                cout << "-1" << nl;
            else
                cout << n << nl;
        }
    }

    return 0;
}

