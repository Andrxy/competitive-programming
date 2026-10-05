    #include <bits/stdc++.h>
using namespace std;

int sumDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k; cin >> k;

    int n = 1, ans;
    while (k > 0) {
        if (sumDigits(n) == 10) {
            --k;
        }
        if (k == 0) ans = n;

        ++n;
    }

    cout << ans;

    return 0;
}
