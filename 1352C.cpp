#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    int times = k / (n - 1);
    k = k % (n - 1);

    int L = times * n;
    int R = L + n;

    if (k == 0) cout << R - 1 << '\n';
    else cout << R - k - 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) solve();

    return 0;
}
