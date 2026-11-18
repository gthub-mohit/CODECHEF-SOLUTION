/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : TAPTAP                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 18, 2026                                           ║
 ║  URL      : https://www.codechef.com/START265C/problems/TAPTAP          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        long long g;
        cin>>n>>g;
        vector<long long> arr(n+1);
        for(int k=1;k<=n;k++)cin>>arr[k];
        long long mod=998244353;
        vector<long long> dp(n+1,0);
        dp[0]=2;
        int l=0;
        long long s=2;
        long long ans=2;
        for(int k=2;k<=n;k++){
            while(l+1<=k-2 && arr[k]-arr[l+1]>=g){
                l++;
                s=(s+dp[l])%mod;
            }
            long long cur=s;
            if(arr[k]-arr[k-1]>=g){
                cur=(cur+dp[k-1])%mod;
            }
            if(arr[k]-arr[k-1]<g){
                s=0;