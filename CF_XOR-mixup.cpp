#include <bits/stdc++.h> 
using namespace std; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
 
int xor_khalit(const vector<int>& arr, int n) {
    if (n == 1) {
        return arr[0];
    }
    
    vector<int> sorted_arr = arr; 
    sort(sorted_arr.begin(), sorted_arr.end()); 
    
    for (int i = 0; i < n - 1; i += 2) {
        if (sorted_arr[i] != sorted_arr[i + 1]) {
            return sorted_arr[i]; 
        }
    }
    
    return sorted_arr[n - 1];
}
 
int main() {
    KHEIRA WAH
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        vector<int> arr(n); 
        for (int i = 0; i < n; ++i) {
            cin >> arr[i]; 
        }
        cout << xor_khalit(arr, n) << endl; 
    }
 
    return 0; 
}
