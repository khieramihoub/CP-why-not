#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int wah1 = (int)1e9 + 7;

int main() {
    KHEIRA WAH
    int n;
    cin >> n;
    
    vector<long long> wah(n);
    for(int i = 0; i < n; ++i) {
        cin >> wah[i];
    }
    
    vector<int> to(n), rx(n);
    vector<pair<int, int>> r;
        for (int i = n - 1; i >= 0; --i) {
        while (!r.empty() && r.back().first >= wah[i]) {
            r.pop_back();
        }
        
        to[i] = r.empty() ? n - 1 : r.back().second - 1;
        r.push_back({wah[i], i});
    }
    
    r.clear();
    
    for (int i = n - 1; i >= 0; --i) {
        while (!r.empty() && r.back().first < wah[i]) {
            r.pop_back();
        }
        
        rx[i] = r.empty() ? wah1 : r.back().second;
        r.push_back({wah[i], i});
    }
    
    int res = 0;
    int ind = 0;
    
    while (ind < n) {
        int go = to[ind];
        while (ind < n && rx[ind] <= go) {
            ind = rx[ind];
        }
        
        ++ind;
        ++res;
    }
    
    cout << res << endl;
    return 0;
}
 
//  ░▒▓██████▓▒░   ░▒▓██████▓▒░  ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓████████▓▒░ ░▒▓█▓▒░ ░▒▓███████▓▒░   ░▒▓██████▓▒░  
// ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░        ░▒▓█▓▒░ ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░      ░▒▓██▓▒░  ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░    ░▒▓██▓▒░    ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓████████▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░  ░▒▓██▓▒░      ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░        ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
//  ░▒▓██████▓▒░   ░▒▓██████▓▒░   ░▒▓██████▓▒░  ░▒▓████████▓▒░ ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓
