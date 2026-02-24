#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++) cin >> a[i];

   int even = 0, odd = 0;
   for (int i = 0; i < n; i++) {
    if(a[i] % 2 == 0) even +=1;
    else odd += 1;
   };
   
   if(even > odd) cout << "READY FOR BATTLE\n";
   else cout << "NOT READY\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
