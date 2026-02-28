#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
   int n; cin >> n;
   int rev = 0;
   while(n > 0) {
        int last_digit = n % 10;
        n = n / 10;
        rev = rev * 10 + last_digit;
   }
   cout << rev << '\n';  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
