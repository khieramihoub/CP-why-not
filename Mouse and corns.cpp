#include <bits/stdc++.h>
using namespace std;

#define mAx 104

int a[mAx][mAx];
char position[2 * mAx];

void path(int m, int n) {
    a[0][1] = 0;  

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = max(a[i-1][j], a[i][j-1]) + a[i][j];
        }
    }
    int i = m, j = n, p = 0;
    while (i + j > 2) {
        if (a[i-1][j] > a[i][j-1]) {
            position[p++] = 'F';
            i--;
        } else {
            position[p++] = 'R';
            j--;
        }
    }
    reverse(position, position + p);
    position[p] = '\0';  
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;

    memset(a, -1, sizeof(a)); 

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[m-i+1][j];
        }
    }

    path(m, n);

    cout << position << endl;

    return 0;
}
