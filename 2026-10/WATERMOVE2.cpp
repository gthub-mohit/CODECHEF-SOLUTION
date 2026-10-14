/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : WATERMOVE2                                                  ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://www.codechef.com/START260C/problems/WATERMOVE2      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , z;
        cin>>n>>z;
        vector<int> arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        sort(arr.begin() , arr.end());
        int ans=arr[n-1];
        for(int k=1;k<n && k<=z;k++){
            ans+=arr[n-k-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}