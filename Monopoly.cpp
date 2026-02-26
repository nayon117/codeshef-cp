#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
   int a, b, c, d; 
   cin >> a >> b >> c >> d;
   int sum = a + b + c + d;
   int lar = max({a, b, c, d});
   int sub = sum - lar;
   if(lar > sub) cout << "YES\n";
   else cout << "NO\n";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
