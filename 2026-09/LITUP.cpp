/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : LITUP                                                       ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 23, 2026                                          ║
 ║  URL      : https://www.codechef.com/START257C/problems/LITUP           ║
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
        int ans=INT_MAX;
        for(int k=0;k<n;k++){
            for(int j=k+1;j<n;j++){
                if(k-z<=0 && j+z>=n-1 && j-k<=2*z+1){
                    ans=min(ans,arr[k]+arr[j]);
                }
            }
        }
        if(ans==INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}