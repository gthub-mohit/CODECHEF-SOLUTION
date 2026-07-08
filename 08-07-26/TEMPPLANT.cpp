/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : TEMPPLANT                                                   ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 8, 2026                                                ║
 ║  URL      : https://www.codechef.com/START246C/problems/TEMPPLANT       ║
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
        int maxi=0;
        for(int k=0;k<n-1;k++){
            int curr=min(arr[k+1] , arr[k]);
            maxi=max(maxi  , curr);
        }
        cout<<maxi<<endl;
    }
    return 0;
}