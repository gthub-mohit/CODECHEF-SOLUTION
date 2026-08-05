/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SUBCOST7                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 5, 2026                                              ║
 ║  URL      : https://www.codechef.com/START250C/problems/SUBCOST7        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>

using namespace std;
int main() {
    int i;
    cin >> i;
    while (i--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        if (N <= 3) {
            cout << N * X << endl;
        } else {
            cout << 3 * X + (N - 3) * Y << endl;
        }
    }
    return 0;
}