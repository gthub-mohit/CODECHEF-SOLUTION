/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : JUMPCOST                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 6, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/JUMPCOST                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
    int i;
    cin>>i;
    while(i--) {
        int n;
        cin>>n;
        vector<long long> a(n + 1);
        for(int k=1;k<=n;k++) {
            cin>>a[k];
        }
        long long balance=0;
        long long maxi=0;
        for(int k=2;k<=n;k++) {
            if(a[k] > 0) {
                balance += a[k];
            }
            maxi=max(maxi, balance + 1 - k);
        }
        cout<<maxi<<endl;
    }

    return 0;
}