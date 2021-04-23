#include <bits/stdc++.h>
using namespace std;

#define vt vector
#define pb push_back
#define sw swap

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        string a;
        cin >> a;
        vt<int> t;  
        int ans=0;
        for(int i=0;i<a.size();++i) {
            if(a[i]=='1')
                ++ans;
            else {
                if(ans) {
                    t.pb(ans);
                    ans=0;
                }
            }
        }

        if(ans)
            t.pb(ans);

        sort(t.begin(),t.end(), greater<int>());
        int res=0;
        for(int i=0;i<t.size();i+=2)
            res+=t[i];
        cout << res << "\n";

            
    }
    return 0;
}

