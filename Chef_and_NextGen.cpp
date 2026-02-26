#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
   int a, b, x, y; cin >> a >> b >> x >> y;
   int unit = a * b;
   int hel = x * y;
   if (hel >= unit) cout << "Yes\n"  ;
   else cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
