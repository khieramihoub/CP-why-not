#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
typedef long long ll;

int main() {
    KHEIRA WAH
    ll hajrat_n, hajrat_m;
    cin >> hajrat_n >> hajrat_m;

    vector<ll> hajrat_x(hajrat_m), hajrat_a(hajrat_m);
    for (int i = 0; i < hajrat_m; i++) cin >> hajrat_x[i];
    for (int i = 0; i < hajrat_m; i++) cin >> hajrat_a[i];

    vector<pair<ll, ll>> hajrat_intervals;
    ll hajrat_sum = 0;

    for (int i = 0; i < hajrat_m; i++) {
        hajrat_x[i]--;  // Convert to 0-based index
        hajrat_intervals.push_back({hajrat_x[i], hajrat_a[i]});
        hajrat_sum += hajrat_a[i];
    }

    sort(hajrat_intervals.begin(), hajrat_intervals.end());
    if (hajrat_intervals[0].first != 0 || hajrat_sum > hajrat_n) {
        cout << -1;
        return 0;
    }

    ll hajrat_last = 0, hajrat_ans = 0, hajrat_capacity = hajrat_intervals[0].second - 1;

    for (int i = 1; i < hajrat_m; i++) {
        ll hajrat_gap = hajrat_intervals[i].first - hajrat_last - 1;
        hajrat_last = hajrat_intervals[i].first;

        if (hajrat_gap > hajrat_capacity) {
            cout << -1;
            return 0;
        }

        hajrat_ans += (hajrat_gap * (hajrat_gap + 1)) / 2;
        hajrat_capacity -= hajrat_gap;

        if (hajrat_capacity > 0) {
            hajrat_ans += hajrat_capacity * (hajrat_gap + 1);
        }
        
        hajrat_capacity += hajrat_intervals[i].second - 1;
    }

    if (hajrat_last < hajrat_n - 1) {
        ll hajrat_gap = (hajrat_n - 1) - hajrat_last;
        
        if (hajrat_gap > hajrat_capacity) {
            cout << -1;
            return 0;
        }
        
        hajrat_ans += (hajrat_gap * (hajrat_gap + 1)) / 2;
        hajrat_capacity -= hajrat_gap;

        if (hajrat_capacity > 0) {
            cout << -1;
            return 0;
        }
    }

    cout << hajrat_ans;
    return 0;
}


// K     K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
//⣿⣿⡿⠋⠄⡀⣿⣿⣿⣿⣿⣿⣿⠿⠛⠋⣉⣉⣉⡉⠙⠻
//⣿⣿⣇⠔⠈⣿⣿⣿⣿⡿⠛⢉⣤⣶⣾⣿⣿⣿⣿⣿⣿⣦
//⣿⠃⠄⢠⣾⣿⣿⠟⢁⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⠟⢁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⡟⠁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⣿⣿⠋⢠⣾⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⠿⣿⣿⣿⣿⣿⣿
//⡿⠁⣰⣿⣿⣿⣿⣿⣿⣿⣿⠗⠄⠄⠄⠄⣿⣿⣿⣿⣿⣿
//⠁⣼⣿⣿⣿⣿⣿⣿⡿⠋⠄⠄⠄⣠⣄⢰⣿⣿⣿⣿⣿⣿
//⣼⣿⣿⣿⣿⣿⣿⡇⠄⢀⡴⠚⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⢰⣿⣿⣿⣿⣿⡿⣿⣿⠴⠋⠄⠄⢸⣿⣿⣿⣿⣿⣿⣿⡟
//⣿⣿⣿⣿⣿⣿⠃⠈⠁⠄⠄⢀⣴⣿⣿⣿⣿⣿⣿⣿⡟⢀
//⣿⣿⣿⣿⣿⣿⠄⠄⠄⠄⢶⣿⣿⣿⣿⣿⣿⣿⣿⠏⢀⣾
//⣿⣿⣿⣿⣿⣷⣶⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⠋⣠⣿⣿
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢁⣼⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢁⣴⣿⣿⣿⣿⣿
//⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⢁⣴⣿⣿⣿⠗⠄⠄⣿
//⠈⠻⣿⣿⣿⣿⣿⣿⠿⠛⣉⣤⣾⣿⣿⣿⣿⣇⠠⠺⣷⣿
//⣦⣄⣈⣉⣉⣉⣡⣤⣶⣿⣿⣿⣿⣿⣿⣿⠉⠁⣀⣼⣿⣿



