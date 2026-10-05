#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    if (n % k == 0) cout << 1 << '\n';

    else if (n > k) cout << 2 << '\n';

    else if (k % n == 0) cout << k / n << '\n';

    else {
        int por_espacio = k / n;

        int a_minimo = por_espacio + 1;

        cout << a_minimo << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) solve();

    return 0;
}
