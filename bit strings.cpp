#include <iostream>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
 
ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
 
int main() {
    ll n;
    cin >> n;
    ll result = mod_pow(2, n, MOD);
    cout << result;
    return 0;
}
