/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : STAIRCASE7                                                  ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 30, 2026                                          ║
 ║  URL      : https://www.codechef.com/START258C/problems/STAIRCASE7      ║
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
        map<int,int> mp;
        for(int k=0;k<n;k++){
            mp[arr[k]-k]++;
        }
        int count=0;
        for(auto k:mp){
            count=max(count,k.second);
        }
        cout<<n-count<<endl;
    }
    return 0;
}