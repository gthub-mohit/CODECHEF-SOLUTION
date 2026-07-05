/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : RD19                                                        ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 5, 2026                                                ║
 ║  URL      : https://www.codechef.com/problems/RD19?tab=statement        ║
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
        int curr_gcd=arr[0];
        for(int k=0;k<n;k++){
            curr_gcd=gcd(arr[k] , curr_gcd);
        }
        if(curr_gcd==1)cout<<0<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}