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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   
    int a,b;
    cin >> a >> b;
    string n;
    cin >> n;

    map<char,int> m;
    
    int c=0;
    for(int i=0;i<a;++i) {
        if(n[i]==64+b)
            ++c;
        if(m.find(n[i])==m.end())
            m[n[i]]=1;
        else
            m[n[i]]++;
    }

    vt<int> o;
    map<char,int>::iterator it;
    for(it=m.begin();it!=m.end();++it)
        o.pb(it->second);
    if(sz(m)<b) 
        cout << 0;

    else
        cout << b*(*min_element(all(o)));



    return 0;
}

