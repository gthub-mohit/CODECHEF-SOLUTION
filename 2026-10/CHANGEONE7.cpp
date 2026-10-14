/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHANGEONE7                                                  ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://www.codechef.com/START260C/problems/CHANGEONE7      ║
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
        int ans=INT_MAX;
        for(int k=0;k<n;k++){
            int mini=INT_MAX;
            int maxi=INT_MIN;
            for(int j=0;j<n;j++){
                if(k==j) continue;
                mini=min(mini,arr[j]);
                maxi=max(maxi,arr[j]);
            }
            ans=min(ans,maxi-mini);
        }
        cout<<ans<<endl;
    }
    return 0;
}