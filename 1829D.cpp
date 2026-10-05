#include <bits/stdc++.h>
using namespace std;

string f(int n, int m) {
    if (n == m) return "YES\n";

    int x = n / 3;
    if (3*x != n) return "NO\n";

    int a = x, b = 2*x;
    
    string asub;
    if (m <= a) asub = f(a, m);
    if (asub == "YES\n") return asub;

    string bsub;
    if (m <= b) bsub = f(b, m);
    if (bsub == "YES\n") return bsub;

    return "NO\n";
}

void solve() {
    int n, m; cin >> n >> m;

    if (m > n) {
        cout << "NO\n"; return;
    }

    string ans = f(n, m);

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
