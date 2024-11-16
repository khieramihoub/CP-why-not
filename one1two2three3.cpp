#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha
int main() {
    Algerian OI
    string s ; cin >> s ; 
    int c1 = count(s.begin(),s.end(),'1');
    int c2 = count(s.begin(),s.end(),'2');
    int c3 = count(s.begin(),s.end(),'3');
    if(c1 == 1 && c2 == 2 && c3 == 3){cout << "Yes";}
    else{cout << "No";}
    return 0;
}
