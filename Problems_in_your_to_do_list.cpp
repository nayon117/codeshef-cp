#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
   int n; cin >> n;
   int removed = 0;
   for (int i = 0; i < n; i++) {
     int rating; cin >> rating;
     if (rating >= 1000) removed += 1;
   }  
   cout << removed << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
