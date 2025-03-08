#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
//TLETLETLETLETLE
int main() {
    KHEIRA WAH
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> wah(n);
        for (int i = 0; i < n; i++) {
            cin >> wah[i];
        }
        sort(wah.begin(), wah.end());
        long long max_time = wah[n - 1];
        long long res = wah[n - 1] + k - 1;
        for (int i = 0; i < n - 1; i++) {
            wah[i] = ((max_time - wah[i]) / (2 * k)) * (2 * k) + wah[i];
            if (wah[i] + k < max_time) {
                wah[i] += 2 * k;
            }
            max_time = max(max_time, wah[i]);
            res = min(res, wah[i] + k - 1);
        }
        if (max_time > res) {
            cout << "-1\n";
        } else {
            cout << max_time << "\n";
        }
    }
    return 0;
}
