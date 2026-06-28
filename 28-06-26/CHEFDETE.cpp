/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHEFDETE                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : June 28, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/CHEFDETE                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; k++) {
        cin >> arr[k];
    }
    int hash[n + 1] = {0};
    for (int k = 0; k < n; k++) {
        if (arr[k] == 0) continue;
        hash[arr[k]]++;
    }
    bool first = true;
    for (int k = 1; k <= n; k++) {
        if (hash[k] == 0) {
            if (!first) cout << " ";
            cout << k;
            first = false;
        }
    }
    cout << endl;
    return 0;
}