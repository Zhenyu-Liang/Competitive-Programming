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
#define lcm(a,b) a*b/__gcd(a,b)

const char nl = '\n';

// YAY:)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    map<ll,ll> freq;
    for(ll i=0;i<t;++i) {
        ll n;
        cin >> n;
        for(int j=1;j<=sqrt(n);++j) {
            if(n%j==0) {
                if(freq.find(j)==freq.end())
                    freq[j]=1;
                else
                    ++freq[j];

                if(j*j!=n) {
                    if(freq.find(n/j)==freq.end())
                        freq[n/j]=1;
                    else
                        ++freq[n/j];
                }

            }
        } 
    }
    freq.erase(1);
    map<ll,ll>::iterator it;
    
    ll ans=0;
    for(it=freq.begin();it!=freq.end();++it) {
        ans=max(it->second,ans);
    }
    
    if(ans>0)
        cout << ans;
    else
        cout << 1;



    return 0;
}

