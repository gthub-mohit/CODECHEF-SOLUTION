/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SKIPONE                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 19, 2026                                             ║
 ║  URL      : https://www.codechef.com/START252C/problems/SKIPONE         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        long long z;
        cin>>n>>z;
        int count=0;
        long long sum=0;
        int maxi=0;
        vector<int>arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        for(int k=0;k<n;k++){
            sum+=arr[k];
            maxi=max(maxi,arr[k]);
            if(sum-maxi<=z) count++;
            else break;
        }
        cout<<count<<endl;
    }
    return 0;
}