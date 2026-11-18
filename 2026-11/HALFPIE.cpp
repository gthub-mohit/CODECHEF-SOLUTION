/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : HALFPIE                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 18, 2026                                           ║
 ║  URL      : https://www.codechef.com/START265C/problems/HALFPIE         ║
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
        int sum=0;
        int mini=INT_MAX;
        for(int k=0;k<n;k++){
            cin>>arr[k];
            sum+=arr[k];
        }
        for(int k=0;k<n-1;k++){
            mini=min(mini,arr[k]+arr[k+1]);
        }

        cout<<sum-mini/2<<endl;
    }
    return 0;
}