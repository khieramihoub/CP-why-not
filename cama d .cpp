#include <bits/stdc++.h>
using namespace std;

#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);

void check(int x1, int y1, int x2, int y2, int mix, int miy, int mdx, int mdy, int pix, int piy, int pdx, int pdy) {
    bool valid = true;
    
    if (!(x1 <= mix && mix <= x2 && y1 <= miy && miy <= y2)) valid = false;
    
    if (!(x1 <= mdx && mdx <= x2 && y1 <= mdy && mdy <= y2)) valid = false;
    
    if (!(x1 <= pix && pix <= x2 && y1 <= piy && piy <= y2)) valid = false;
    
    if (!(x1 <= pdx && pdx <= x2 && y1 <= pdy && pdy <= y2)) valid = false;

    if (valid) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    Algerian OI
    int t; 
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2;
        int mix, miy, mdx, mdy, pix, piy, pdx, pdy; 
        cin >> mix >> miy >> mdx >> mdy >> pix >> piy >> pdx >> pdy;
        
        check(x1, y1, x2, y2, mix, miy, mdx, mdy, pix, piy, pdx, pdy);
    }
    return 0;
}
