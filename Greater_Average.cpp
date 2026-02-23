#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
     int a, b, c; cin >> a >> b >> c;
     double avg = (double)(a + b) / 2;
     if(avg > c) cout << "YES\n";
     else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
