#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 70;

signed main() {
    int n;
    cin >> n;
    vector<int> dp(MAXN, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; ++i) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    cout << dp[n] << endl;
}