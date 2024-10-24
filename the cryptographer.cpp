#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
bool awali(int n ){
    if (n<2) return false; 
    for(int i = 2 ; i * i <= n ; ++i){
        if(n%i == 0) return false ; 
    }
    return true;
}
int main() {
    KHEIRA WAH
    string K ; 
    int l ; 
    while(cin >> K >> l){
        if(K == "0" && l == 0) break;
        __int128_t k = 0 ; 
        for(char c : K){
            k = k*10 + (c-'0');
        }
        bool mli7a = true ; 
        int s = 0 ; 
        for(int p = 2 ; p < l; ++p){
            if(k % p == 0){
                mli7a = false;
                s = p ; 
                break ; 
            }
        }
        if(mli7a){
            cout << "GOOD" << endl;
        } 
        else{
            cout << "BAD" << " " << s << endl ;
        }
    }
    

    
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



