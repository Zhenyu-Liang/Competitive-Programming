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
    
    int n;
    cin >> n;
    string a;
    cin >> a;
    string ans;
     
    for(int i=0;i<n;++i) {
       if(sz(a)%2==0)
           ans=a[0]+ans;
       else
           ans+=a[0];
        a.erase(a.begin());

    }

    cout << ans;
    

    return 0;
}

