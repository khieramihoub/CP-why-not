#include <bits/stdc++.h> 
using namespace std; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  

int main(){
    KHEIRA WAH 
    int c ; 
    cin >> c ; 
    int best_ida2a = -1; 
    float avrg = -1.0;
    for (int i = 0  ; i <c ; ++i){
        int n ; 
        cin >> n ; 
        float total = 0.0; 
        for (int j = 0 ; j <n ; ++ j ){
            float ida2a ; 
            cin >> ida2a ; 
            total += ida2a ; 
        }
        float avrg_ida2a = total / n ;
        if(avrg_ida2a > avrg){
            avrg = avrg_ida2a ; 
            best_ida2a = i+1;
        }
    }
     cout << best_ida2a ; 

    return 0 ;


}

//   K     K   H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A



