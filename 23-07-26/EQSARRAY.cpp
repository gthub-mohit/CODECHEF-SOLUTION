/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EQSARRAY                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 23, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/EQSARRAY?tab=statement    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n , z;
        cin>>n>>z;
        vector<long long> arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        if(n==1){
            if(arr[0]==z)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else {
            if(find(arr.begin() , arr.end() , z) != arr.end())cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}