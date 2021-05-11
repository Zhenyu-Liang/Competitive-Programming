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
    
    string a,b,c,ans;
    cin >> a >> b >> c;
    
    for(int i=0;i<sz(c);++i) {
        if(a.find(c[i])!=string::npos) {
            cout << b[a.find(c[i])];
        } else {
            int o=a.find(c[i]+32);
            if(o!=string::npos) {
                char q=b[o]-32;
                cout << q;
            } else {
                cout << c[i];
            }
        }
    }


    return 0;
}

