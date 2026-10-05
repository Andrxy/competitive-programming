#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a, b, c; cin >> a >> b >> c;

    ll curScore = abs(a - b);

    if (abs((a + c) - b) > curScore) {
        cout << abs((a + c) - b) << '\n';
        return;
    }
    else {
        cout << curScore << '\n';
        return;
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
