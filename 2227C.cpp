#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> a(n);
    for (auto& x : a) cin >> x;

    int idx = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 6 == 0) {
            swap(a[i], a[idx]);
            ++idx;
        }
    }

    int tres_idx = idx, dos_idx = n - 1;
    for (int i = tres_idx; i < n; ++i) {
        if (a[i] % 3 == 0) {
            swap(a[i], a[tres_idx]);
            ++tres_idx;
        }
    }

    for (int i = n - 1; i >= tres_idx; --i) {
        if (a[i] % 2 == 0) { 
            swap(a[i], a[dos_idx]);
            --dos_idx;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i + 1 == n) cout << a[i] << '\n';
        else cout << a[i] << ' ';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) solve();

    return 0;
}
