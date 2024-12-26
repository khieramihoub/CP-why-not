#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 300005;
int n;
ll S, a[MAXN];
ll pref[MAXN], prefIdx[MAXN];

ll wah(int l, int r) {
    int len = r - l + 1;
    if (len <= 1) return 0;
    
    ll sumVals = pref[r] - (l > 0 ? pref[l-1] : 0);
    ll sumIdx = prefIdx[r] - (l > 0 ? prefIdx[l-1] : 0);
    
    return 2LL * sumIdx - (2LL * l + len - 1) * sumVals;
}

bool nichen(int k) {
    if (k <= 1) return true;
    
    for (int i = 0; i + k - 1 < n; i++) {
        if (wah(i, i + k - 1) <= S) {
            return true;
        }
    }
    return false;
}

int solve() {
    sort(a, a + n);
    
    pref[0] = a[0];
    prefIdx[0] = 0LL * a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + a[i];
        prefIdx[i] = prefIdx[i-1] + (ll)i * a[i];
    }
    
    int left = 1, right = n;
    int ans = 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nichen(mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> S;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << solve() << "\n";
    return 0;
}
