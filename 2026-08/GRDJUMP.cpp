/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : GRDJUMP                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 26, 2026                                             ║
 ║  URL      : https://www.codechef.com/START253C/problems/GRDJUMP         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--) {
        int a,b,p,q,r;
        cin>>a>>b>>p>>q>>r;
        int dp[105][105];
        for(int k=0;k<=a;k++)
            for(int j=0;j<=b;j++)
                dp[k][j] = 1e9;
        dp[0][0] = 0;
        for(int k=0;k<=a;k++) {
            for(int j=0;j<=b;j++) {
                if(k==0 && j==0)
                    continue;
                if(k>=1)
                    dp[k][j] = min(dp[k][j],dp[k-1][j]+p);
                if(k>=2)
                    dp[k][j] = min(dp[k][j],dp[k-2][j]+p);
                if(j>=1)
                    dp[k][j] = min(dp[k][j],dp[k][j-1]+q);
                if(j>=2)
                    dp[k][j] = min(dp[k][j],dp[k][j-2]+q);
                if(k>=1 && j>=1)
                    dp[k][j] = min(dp[k][j],dp[k-1][j-1]+r);
            }