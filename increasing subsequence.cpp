#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    vector<int> ISS;  
    vector<int> prv(n, -1), position(n, -1);

    for (int i = 0; i < n; ++i) {
        auto it = lower_bound(ISS.begin(), ISS.end(), x[i]);
        int index = it - ISS.begin();

        if (it == ISS.end()) {
            ISS.push_back(x[i]);  
            position[ISS.size() - 1] = i;  
        } else {
            *it = x[i]; 
            position[index] = i;  
        }

        if (index > 0) {
            prv[i] = position[index - 1];
        }
    }

    int length = ISS.size();
    vector<int> result;
    int k = position[length - 1];

    while (k != -1) {
        result.push_back(x[k]);
        k = prv[k];
    }
    reverse(result.begin(), result.end());
    cout << length << "\n";
    for (int x : result) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
