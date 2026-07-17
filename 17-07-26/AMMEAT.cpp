/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : AMMEAT                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 17, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/AMMEAT?tab=statement      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<ll> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        sort(p.begin(), p.end(), greater<>());
        ll sum=0;
        ll  count=0;
        for(int k=0;k<n;k++){
            sum+=p[k];
            count++;
            if(sum>=m){cout<<count<<endl;
            break;
            }
        }
    }

}
