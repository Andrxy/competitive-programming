#include <bits/stdc++.h>
using namespace std;

string f(int n, int M = 0) {

    int a = M * 10 + 4;
    int b = M * 10 + 7;

    if (n % a == 0 || n % b == 0) return "YES";

    string subtreeA = "";
    if (a < n) subtreeA = f(n, a);
    if (subtreeA == "YES") return "YES";

    string subtreeB = "";
    if (b < n) subtreeB = f(n, b);
    if (subtreeB == "YES") return "YES";

    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    cout << f(n);

    return 0;
}
