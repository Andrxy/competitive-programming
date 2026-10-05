#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> aux;

    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;

        if (x != i) aux.push_back(x);
    }

    if (n == 1) {
        cout << "YES\n";
        return;
    }

    reverse(aux.begin(), aux.end());

    for (int i = 1; i < aux.size(); ++i) {
        if (aux[i] > aux[i - 1]) continue;
        else {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) solve();

    return 0;
}
