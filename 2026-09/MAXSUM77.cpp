/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MAXSUM77                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 2, 2026                                           ║
 ║  URL      : https://www.codechef.com/START254C/problems/MAXSUM77        ║
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
        vector<int>arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        int total=0;
        for(int k=0;k<n;k++){
            total+=arr[k];
        }
        int ans=0;
        for(int k=0;k<=z;k++){
            int left=0;
            int right=0;
            for(int j=0;j<k;j++){
                left+=arr[j];
            }
            for(int j=n-(z-k);j<n;j++){
                right+=arr[j];
            }
            int remaining=total-left-right;
            ans=max(ans,remaining);