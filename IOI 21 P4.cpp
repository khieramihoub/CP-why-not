#include "dna.h"
#include <bits/stdc++.h>
using namespace std;
vector<int> A_a, C_a, T_a;
vector<int> A_b, C_b, T_b;
vector<int> AC_ab, AT_ab, CA_ab, CT_ab, TA_ab, TC_ab;
string aa, bb;
void init(string a, string b) {
    int n = a.size();
    A_a = C_a = T_a = vector<int>(n + 1, 0);
    A_b = C_b = T_b = vector<int>(n + 1, 0);
    AC_ab = AT_ab = CA_ab = CT_ab = TA_ab = TC_ab = vector<int>(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        A_a[i] = A_a[i - 1] + (a[i - 1] == 'A');
        C_a[i] = C_a[i - 1] + (a[i - 1] == 'C');
        T_a[i] = T_a[i - 1] + (a[i - 1] == 'T');
        A_b[i] = A_b[i - 1] + (b[i - 1] == 'A');
        C_b[i] = C_b[i - 1] + (b[i - 1] == 'C');
        T_b[i] = T_b[i - 1] + (b[i - 1] == 'T');
        if (a[i - 1] == 'A' && b[i - 1] == 'C') AC_ab[i]++;
        if (a[i - 1] == 'A' && b[i - 1] == 'T') AT_ab[i]++;
        if (a[i - 1] == 'C' && b[i - 1] == 'A') CA_ab[i]++;
        if (a[i - 1] == 'C' && b[i - 1] == 'T') CT_ab[i]++;
        if (a[i - 1] == 'T' && b[i - 1] == 'A') TA_ab[i]++;
        if (a[i - 1] == 'T' && b[i - 1] == 'C') TC_ab[i]++;
        AC_ab[i] += AC_ab[i - 1];
        AT_ab[i] += AT_ab[i - 1];
        CA_ab[i] += CA_ab[i - 1];
        CT_ab[i] += CT_ab[i - 1];
        TA_ab[i] += TA_ab[i - 1];
        TC_ab[i] += TC_ab[i - 1];
    }
}
int get_distance(int x, int y) {
    int a_count_A = A_a[y + 1] - A_a[x];
    int a_count_C = C_a[y + 1] - C_a[x];
    int a_count_T = T_a[y + 1] - T_a[x];
    int b_count_A = A_b[y + 1] - A_b[x];
    int b_count_C = C_b[y + 1] - C_b[x];
    int b_count_T = T_b[y + 1] - T_b[x];
    if (a_count_A != b_count_A || a_count_C != b_count_C || a_count_T != b_count_T) {
        return -1;  
    }
    int min_AT = min(AT_ab[y + 1] - AT_ab[x], TA_ab[y + 1] - TA_ab[x]);
    int min_AC = min(AC_ab[y + 1] - AC_ab[x], CA_ab[y + 1] - CA_ab[x]);
    int min_CT = min(CT_ab[y + 1] - CT_ab[x], TC_ab[y + 1] - TC_ab[x]);

    int total_makanch = min_AT + min_AC + min_CT;
    int remaining_makanch = (max(AT_ab[y + 1] - AT_ab[x], TA_ab[y + 1] - TA_ab[x]) -
                                min(AT_ab[y + 1] - AT_ab[x], TA_ab[y + 1] - TA_ab[x])) * 2;
    return total_makanch + remaining_makanch;
}
