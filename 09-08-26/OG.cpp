/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : OG                                                          ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 9, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/OG                        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    cin>>i;
    while(i--) {
        long long n;
        cin>>n;
        long long q = n/9;
        long long r = n%9;
        long long ans =q*45+r*(r+1)/2;
        cout<<ans<<endl;
    }

    return 0;
}