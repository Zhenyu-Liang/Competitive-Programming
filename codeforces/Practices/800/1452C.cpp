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


int cnt(string s, string a, string b) {
    int c=0;
    int ans=0;
    for(int i=0;i<sz(s);++i) {
        string o="";
        o+=s[i];
        if(o==b){
            if(c) {
                --c; ++ans;
            }

        } else if(o==a)
            ++c;
    }

    return ans;
}

 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
     
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << cnt(s,"(",")") + cnt(s,"[","]") << nl;
    }
 
    return 0;
}
