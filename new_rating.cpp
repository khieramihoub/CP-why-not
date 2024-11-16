#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha
int main() {
    Algerian OI
    int T;
    cin >> T;
    while (T--) {
       int n ; cin >> n ; 
       vector<int> a(n+1); 
       int wah = 0 ; 
       for(int i = 1 ; i <= n ; ++i) {
        cin >> a[i] ; 
       }
       vector<int> p(n+1);
       for(int i = 1 ; i<= n ; ++i){
        if(wah < a[i]) wah++;
        else if(wah > a[i]) wah--;
        p[i]= max(p[i-1],wah) ; 
       }
       auto wili = [&](int k) {
       int hi = k;
        for (int i = n; i >= 1; i--) {
        if (p[i - 1] >= hi) return true;
        if (a[i] < hi) hi++;
        else hi--;
    }
    return false;
};
// drwk ndirou binaarysearch
   int L = 0, R = n + 1;
    while (L < R) {
    int mid = (L + R + 1) >> 1;
    if (wili(mid)) L = mid;
    else R = mid - 1;
}
cout << L << '\n' ; 
    }
}
