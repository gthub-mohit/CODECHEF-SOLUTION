/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MRSWAP                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 19, 2026                                             ║
 ║  URL      : https://www.codechef.com/START252C/problems/MRSWAP          ║
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
        vector<int> arr(2*n);
        int sum=0;
        for(int k=0;k<2*n;k++){
            cin>>arr[k];
        }
        for(int k=0;k<n;k++){
            if(arr[k]<=arr[2*n-k-1])sum+=arr[2*n-k-1];
            else sum+=arr[k];
        }
        cout<<sum<<endl;
    }
    return 0;
}
