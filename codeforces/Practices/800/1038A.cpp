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
    
    int a, b;
    cin >> a >> b;
    string n;
    cin >> n;
    
    string c="";
    for(int i=0;i<sz(n);++i) {
        if(c.find(n[i])==string::npos) {
            c+=n[i];
        }
    }
     
    if(sz(c)>=b) {
        string ans="";
        string t="";
        for(int i=0;i<sz(n);++i) {
            if(t.find(n[i])==string::npos&&(n[i]-64<=b)) {
                t+=n[i];
            }

            if(sz(t)==b) {
                ans+=t;
                t="";
            }
        }

        cout << sz(ans);
    
    } else {
        cout << 0;
    }; 

    return 0;
}

