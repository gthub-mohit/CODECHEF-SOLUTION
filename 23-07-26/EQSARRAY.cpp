/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EQSARRAY                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 23, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/EQSARRAY                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        if(find(arr.begin() , arr.end() , k) != arr.end())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}