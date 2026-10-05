#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m, s; cin >> h >> m >> s;

    if (h > 2) cout << '+';
    else if (h < 2) cout << '-';
    else if (m > 30) cout << '+';
    else if (m < 30) cout << '-';
    else if (s > 0) cout << '+';
    else cout << '=';

    return 0;
}
