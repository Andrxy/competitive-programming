#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    string enemy, gregors;
    cin >> enemy >> gregors;

    int max_pawns = 0;

    for (int j = 0; j < n; ++j) {
        if (enemy[j] == '0' && gregors[j] == '1') {
            ++max_pawns;
            gregors[j] = '0';
        }
    }

    for (int j = 0; j < n; ++j) {
        if (j == 0) {
            if (gregors[0] == '1' && enemy[1] == '1') {
                ++max_pawns;
                enemy[1] = '0';
            }
        }
        else if (j == n - 1) {
            if (gregors[n - 1] == '1' && enemy[n - 2] == '1') {
                ++max_pawns;
                enemy[n - 2] = '0';
            }
        }
        else if (gregors[j] == '1') {
            if (enemy[j - 1] == '1') {
                ++max_pawns;
                enemy[j - 1] = '0';
            }
            else if (enemy[j + 1] == '1') {
                ++max_pawns;
                enemy[j + 1] = '0';
            }
        }
    }

    cout << max_pawns << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    while (t--) solve();

    return 0;
}
