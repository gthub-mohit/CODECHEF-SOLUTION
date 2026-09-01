/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BUGCAL                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 1, 2026                                           ║
 ║  URL      : https://www.codechef.com/problems/BUGCAL                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cin >> i;

    while(i--){
        int a, b;
        cin >> a >> b;

        int ans = 0;
        int place = 1;

        while(a > 0 || b > 0){
            int c = a % 10;
            int d = b % 10;

            int digit = (c + d) % 10;

            ans += digit * place;

            a /= 10;
            b /= 10;
            place *= 10;
        }

        cout << ans << endl;