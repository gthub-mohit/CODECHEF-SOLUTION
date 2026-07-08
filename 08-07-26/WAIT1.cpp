/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : WAIT1                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 8, 2026                                                ║
 ║  URL      : https://www.codechef.com/START246C/problems/WAIT1?tab=statement║
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
        vector<int> arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        int ans = 0;
        int curr_time = arr[0];
        for(int k=1;k<n;k++){
            curr_time = max(curr_time,arr[k]);
            ans += (curr_time-arr[k]);
        }
        cout<<ans<<endl;
    }
    return 0;
}