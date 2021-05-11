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
    
    string s;
    cin >> s;
    
    int no=0;
    for(int i=0;i<sz(s);++i) {
        if(s[i]!='1'&&s[i]!='4'){
            no=1;
            break;
        }
    }

    if(s[0]=='4'||s.find("444")!=string::npos||no)
        cout << "NO";
    else
        cout << "YES";
}

