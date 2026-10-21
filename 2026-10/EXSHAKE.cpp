/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EXSHAKE                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 21, 2026                                            ║
 ║  URL      : https://www.codechef.com/START261C/problems/EXSHAKE         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(n);
        int sum=0;
        int count=0;
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        sort(arr.begin(),arr.end());
        for(int k=0;k<n;k++){
            sum+=arr[k];
            if((sum*(sum-1))/2<=m)count++;
            else break;
        }
        cout<<count<<endl;
    }
    return 0;
}
