/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : WATERMOVE                                                   ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://www.codechef.com/START260C/problems/WATERMOVE       ║
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
        int ans;
        if(n==2) ans =arr[0] + arr[1];
        else ans = max(arr[n-1], arr[0] + arr[1]);
        cout<<ans<<endl;
    }
    return 0;
}