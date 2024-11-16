#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha
int main() {
    Algerian OI
    string s ; cin >> s ; 
    vector<int> a; 
    int res = 0 ; 
    for(char c : s){
        if(c == '-') res++;
        else if(c == '|'){
            if(res > 0 ){
                a.push_back(res);
                res = 0;
            }
        }
    }
    for(size_t i = 0 ; i < a.size(); ++i){
        if(i > 0 ) cout << " " ; 
        cout << a[i] ; 
    }
    cout << endl;
    return 0;
}

