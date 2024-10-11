#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);

int main() {
    KHEIRA WAH

    int n;
    cin >> n;
    vector<int> x(n), p(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    vector<long long > prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + p[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;

        int yassar = lower_bound(x.begin(), x.end(), l) - x.begin();   
        int yamin = upper_bound(x.begin(), x.end(), r) - x.begin() - 1; 

        if (yassar > yamin) {
            cout << "0" << '\n';  
        } else {
            cout << prefix[yamin + 1] - prefix[yassar] << '\n';  
        }
    }

    return 0;
}
