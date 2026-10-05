#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, x, t; cin >> n >> x >> t;

    if (n == 1 || t < x) {cout << 0 << '\n'; return;}
    if (t == x) {cout << n - 1 << '\n'; return;}

    ll m = t / x;
    ll k = n - m;

    ll ans;
    if (k < 0) ans = n * (n - 1) / 2;
    else ans = k * m + (n - k - 1) * (n - k) / 2;

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) solve();

    return 0;
}
