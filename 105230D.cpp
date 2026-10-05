#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll sumDivisors(ll n) {
    ll sum = 0;

    for (int d = 1; d * d <= n; ++d) {
        if (n % d == 0) {
            int coefficient = n / d;

            if (d != n) sum = sum + d;

            if (coefficient != n && coefficient * coefficient != n) sum = sum + coefficient;
        }
    }

    return sum;
}

void solve() {
    int ai; cin >> ai;

    ll sumDiv = sumDivisors(ai); 

    if (sumDiv == ai) {
        cout << ai << " perfecto\n";
        return;
    }

    ll again = sumDivisors(sumDiv); 

    bool romanticos = ai == again;
    bool abundantes = sumDiv > ai;

    cout << ai;
    if (romanticos) cout << " romantico";
    if (abundantes) cout << " abundante";
    if (!romanticos && !abundantes) cout << " complicado";

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    while (n--) solve();

    return 0;
}
