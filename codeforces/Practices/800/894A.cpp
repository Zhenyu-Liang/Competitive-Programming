#include <bits/stdc++.h>
using namespace std;

#define vt vector
#define pb push_back
#define sw swap

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string n;
    cin >> n;
    int ans = 0;
    int s=0;
    for(int i=s;i<n.size();++i) {
        if(n[i] == 'Q'){
            for(int j=i+1;j<n.size();++j) {
                if(n[j]=='A') {
                    for(int z=j+1;z<n.size();++z) {
                        if(n[z]=='Q') {
                            ++ans;
                            s=i+1;
                        }
                            
                    }
                }                          
            }
        }
    }

    cout << ans;

    
    return 0;
}

