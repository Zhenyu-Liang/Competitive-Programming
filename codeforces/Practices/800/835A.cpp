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
    
    vector<int> n(5);
    for(int i=0;i<5;++i)
        cin >> n[i];

    int a1=(n[0]*n[1])+2*(n[3]);
    int a2=(n[0]*n[2])+2*(n[4]);

    if (a1==a2)
        cout << "Friendship";
    else if (a1>a2)
        cout << "Second";
    else
        cout << "First";

    return 0;
}

