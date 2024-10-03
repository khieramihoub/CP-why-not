#include <bits/stdc++.h> 
using namespace std; 

#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);

vector<int> good_arr(const vector<int>& b) {
    int x = b.size() + 1; 
    vector<int> a(x); 
    a[0] = b[0];
    for (int i = 1; i < x - 1; ++i) {
        a[i] = b[i - 1] | b[i];
    }
    a[x - 1] = b[x - 2];  
    bool yslo7 = true;
    for (int i = 1; i < x - 1; ++i) {
        if ((a[i] & a[i + 1]) != b[i]) {
            yslo7 = false;
            break;
        }
    }
    if (yslo7) {
        return a;
    } else {
        return {};
    }
}

int main() {
    KHEIRA WAH 
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> b[i];
        }
         vector<int> a = good_arr(b);
        if (!a.empty()) {
            for (int num : a) {
                cout << num << " ";
            }
            cout << '\n';
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}


// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
