#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
     int a, b, c; cin >> a >> b >> c;
     if(a + b + c >= 2) cout << "Not now\n";
     else cout << "Water filling time\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
