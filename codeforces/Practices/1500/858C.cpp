#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define sz(x) (int)(x).size()
#define pb push_back
#define sw swap
#define all(x) x.begin(),x.end()
#define vt vector

const char nl = '\n';

// YAY:)
int ok(char n) {
    for(char i:"aeiou") {
        if(n==i)
            return 0;
    }
    
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string n;
    cin >> n;

    for(int i=0;i<sz(n);++i) { 
        if((ok(n[i])&&ok(n[i+1])&&ok(n[i+2]))&&!(n[i]==n[i+1]&&n[i+2]==n[i+1])) n.insert(i+=2," ");
    }

    cout << n;

    return 0;
}

