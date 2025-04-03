#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll ;  
//ig imma quit aoi I'm so bad at it 
// imma kms 
void wah() {
    int wee;
    cin >> wee;
    vector<int> oui(wee + 1);
    for (int wah = 1; wah <= wee; wah++){
        cin >> oui[wah];
    }
        vector<int> zee(wee + 1);
    for (int wah = 1; wah <= wee; wah++){
        cin >> zee[wah];
    }
    vector<int> freq(wee + 1, 0);
    vector<int> cyclelen;
    int cycle__oui = 0;
    for (int wah = 1; wah <= wee; wah++){
        if (freq[wah] != 0) continue;  
          cycle__oui++;
        int cur = wah;
        int count = 0;
        while (freq[cur] == 0) {
            freq[cur] = cycle__oui;
            count++;
            cur = oui[cur];
        }
        cyclelen.push_back(count);     }
    
    vector<bool> forced(cycle__oui + 1, false);
    long long totaaaal = 0;
        for (int wah = 1; wah <= wee; wah++){
        int idx = zee[wah]; 
        int cycle_we = freq[idx]; 
        if (!forced[cycle_we]) {
            forced[cycle_we] = true;
            totaaaal += cyclelen[cycle_we - 1];
        }
        cout << totaaaal << " ";
    }
    cout << "\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        wah();
    }
    return 0;
}
//tletletleltltllleltlletlt
