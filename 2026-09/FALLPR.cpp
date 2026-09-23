/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FALLPR                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 23, 2026                                          ║
 ║  URL      : https://www.codechef.com/START257C/problems/FALLPR          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        long long sum=0;
        int mini=0;
        bool deleted=false;
        bool possible=true;
        for(int k=0;k<n;k++){
            sum+=arr[k];
            mini=min(mini , arr[k]);
            if(sum<0){
                if(deleted){
                    possible=false;
                    break;
                }
                sum-=mini;
                deleted=true;
            }
        }