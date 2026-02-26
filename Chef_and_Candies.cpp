#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
   int n, x; cin >> n >> x;
   if(x > n) cout << 0 << '\n';
   double needed = n - x;
   if(needed >= 0) cout << ceil(needed / 4) << '\n';  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
