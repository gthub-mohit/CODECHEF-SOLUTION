/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : COLLAPSEE                                                   ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 28, 2026                                            ║
 ║  URL      : https://www.codechef.com/START262C/problems/COLLAPSEE       ║
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
        vector<long long> arr(n);
        for(int k=0;k<n;k++) {
            cin>>arr[k];}
        long long count=0;
        for(int k=0;k<n-2;k++){
            count+=abs(arr[k]);
        }
        count=count-arr[n-2]+arr[n-1];
        cout<<count<<endl;
    }
    return 0;
}
