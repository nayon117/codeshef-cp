#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
   int a, b; cin >> a >> b;
   double first = a / .10 ;
   double sec = b / .20;

   if(first > sec) cout << "FIRST\n";
   else if(first < sec) cout << "SECOND\n";
   else cout << "ANY\n"; 
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
