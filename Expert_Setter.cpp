#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int x, y; cin >> x >> y;
   double avg = x * .5;
   if(y >= avg) cout << "YES\n";
   else cout << "NO\n";
 }

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
