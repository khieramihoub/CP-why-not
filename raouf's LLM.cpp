
#include <bits/stdc++.h>
using namespace std;

#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);

int main() {
    KHEIRA WAH
    string s  ; cin >> s ; 
    int wah = 0 ; 
    int prblms = 0 ; 
    int max_prblms = 0 ; 
    char a = 'A' ; 
    for (char c : s) {
        if (c == a){
            prblms++;
            a++;
        }
        if (a > 'Z' || c == 'A') {  
          wah++;
          max_prblms = max(max_prblms , prblms ) ; 
         if (c == 'A') {
           prblms = 1;  
              } else {
                   prblms= 0;
}
              a = 'B';  
        }
    }
    max_prblms = max(max_prblms, prblms);  
    cout << wah << " " << max_prblms << endl;
    return 0;
}
