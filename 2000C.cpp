#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<int> a(n);
    for (int& x : a) cin >> x;
    
    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        string s; cin >> s;

        if (s.size() != n) {cout << "NO\n"; continue;}

        unordered_map<char, int> m1;
        unordered_map<int, char> m2;
        bool match = true;

        for (int j = 0; j < n; ++j) {
            char c = s[j];
            int num = a[j];

            if (m1.find(c) != m1.end() && m2.find(num) != m2.end()) {
                if (m1[c] !=  num && m2[num] != c) {
                    match = false;
                    break;
                }
            }
            else if (m1.find(c) == m1.end() && m2.find(num) != m2.end()) {
                match = false;
                break;
            }
            else if (m1.find(c) != m1.end() && m2.find(num) == m2.end()) {
                match = false;
                break;
            }
            else {
                m1[c] = num;
                m2[num] = c;
            }
        }

        if (match) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
