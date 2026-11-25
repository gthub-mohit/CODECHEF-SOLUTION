/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : DBLDROP                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 25, 2026                                           ║
 ║  URL      : https://www.codechef.com/START266C/problems/DBLDROP         ║
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
        long long arr[n],sum=0,maxi=0;
        for(int k=0;k<n;k++){
            cin>>arr[k];
            sum+=arr[k];
            maxi=max(maxi,arr[k]);
        }
        long long ans=sum-maxi;
        for(int k=0;k<n;k++)
            ans=max(ans,sum+arr[k]-max(maxi,2*arr[k]));
        cout<<ans<<endl;
    }
    return 0;
}