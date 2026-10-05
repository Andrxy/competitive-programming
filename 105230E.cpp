#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vi factors; bool prime;

    do {
        prime = true;

        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                prime = false;
                factors.push_back(i);

                n = n / i;
                break;
            }
        }

        if (prime) factors.push_back(n);
    } while (!prime);

    int m = factors.size();
    for (int i = 0; i < m; ++i) {
        cout << factors[i];

        if (i < m - 1) cout << "x";
    }

    return 0;
}
