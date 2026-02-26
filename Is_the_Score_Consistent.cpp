#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
   int a , b; cin >> a >> b;
   int c , d; cin >> c >> d;
   if(c < a || d < b) cout << "IMPOSSIBLE\n";
   else cout << "POSSIBLE\n";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
