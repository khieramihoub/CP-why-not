#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    vector<int> arr = {4, 8, 15, 16, 23, 42}; 
    vector<int> ans(6); 
    int p1, p2, p3, p4; 
    cout << "?" << " 1" << " 2" << endl;
    cin >> p1;
    cout << "? 2 3" << endl;
    cin >> p2;
    cout << "? 3 4" << endl;
    cin >> p3;
    cout << "? 4 5" << endl;
    cin >> p4;
    do {
        if (arr[0] * arr[1] == p1 && arr[1] * arr[2] == p2 && arr[2] * arr[3] == p3 && arr[3] * arr[4] == p4  )  {    
               ans = arr; 
            break;
        }
    } while (next_permutation(arr.begin(), arr.end()));
     cout << "! ";
    for (int i = 0; i < 6; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
//  █████╗  ██████╗ ██╗
// ██╔══██╗██╔═══██ ██║
// ███████║██║   ██║██║
// ██╔══██║██║   ██║██║
// ██║  ██║╚██████╔╝██║
// ╚═╝  ╚═╝ ╚═════╝ ╚═╝                                                                              
