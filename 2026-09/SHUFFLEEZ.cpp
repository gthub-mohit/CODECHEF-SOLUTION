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
        int n,k;
        cin>>n>>k;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
        }
        long long ans=1;
        long long mod=998244353;
        for(int j=1;j<=k;j++){
            ans=ans*j%mod;
        }
        for(int j=0;j<n-k;j++){
            ans=ans*k%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}