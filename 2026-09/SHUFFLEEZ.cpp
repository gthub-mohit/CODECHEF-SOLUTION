/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SHUFFLEEZ                                                   ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 30, 2026                                          ║
 ║  URL      : https://www.codechef.com/START258C/problems/SHUFFLEEZ       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n,z;
        cin>>n>>z;
        for(int k=0;k<n;k++){
            int x;
            cin>>x;
        }
        long long ans=1;
        long long mod=998244353;
        for(int k=1;k<=z;k++){
            ans=ans*k%mod;
        }
        for(int k=0;k<n-z;k++){
            ans=ans*z%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}