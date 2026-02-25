#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
     int n, x; cin >> n >> x;
     double slice = n * x;
     double total = ceil(slice / 4);
     cout << total << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
