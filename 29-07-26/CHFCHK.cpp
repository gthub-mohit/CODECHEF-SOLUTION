/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHFCHK                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/CHFCHK                    ║
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
        sort(arr.begin() , arr.end());
        cout<<arr[0]<<endl;
    }
    return 0;
}
