#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
#define ll long long
#define pii pair<int, int>
const ll inf = 1e9;

void solve() {
    int n, s;
    cin >> n >> s;
    
    vector<pii> v; 
    vector<vector<int>> h(n + 1, vector<int>(s + 1)); 
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            cin >> h[i][j];
            v.push_back({h[i][j], i}); 
        }
    }

    sort(v.begin(), v.end()); 

    vector<int> classCount(n + 1, 0); 
    int totalClasses = 0;
    int minDiff = inf;
    
    int left = 0;
    for (int right = 0; right < v.size(); ++right) {
        int classIndex = v[right].second;
        if (classCount[classIndex] == 0) {
            totalClasses++;
        }
        classCount[classIndex]++;
                while (totalClasses == n) {
            minDiff = min(minDiff, v[right].first - v[left].first);
                        classIndex = v[left].second;
            classCount[classIndex]--;
            if (classCount[classIndex] == 0) {
                totalClasses--;
            }
            left++;
        }
    }
    
    cout << minDiff;
}
