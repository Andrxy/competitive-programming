#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    int curHeight = 0, maxHeight = 0, maxIdx = 0;

    int n = s.size();
    for (int i = 1; i <= n; ++i) {
        char c = s[i - 1];

        curHeight += (c == '+');
        curHeight -= (c == '-');

        if (curHeight > maxHeight) {
            maxHeight = curHeight;
            maxIdx = i;
        }
    }

    cout << maxIdx;

    return 0;
}
