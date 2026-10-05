#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y, w; cin >> y >> w;

    int points, numerator;
    if (y == w) points = y;
    else points = max(y, w);

    numerator = 6 - points + 1;

    if (numerator == 0) { cout << "0/1"; return 0; }
    else if (numerator == 6) { cout << "1/1"; return 0; }

    int gcdd = gcd(numerator, 6);

    cout << numerator / gcdd << '/' << 6 / gcdd;

    return 0;
}
