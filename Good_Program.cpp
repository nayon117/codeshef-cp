#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
   int n ; cin >> n;
   if(n % 4 == 0) cout << "Good\n";
   else cout << "Not Good\n";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
