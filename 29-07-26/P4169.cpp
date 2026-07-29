/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : P4169                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/P4169?tab=statement       ║
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
        bool flag=true;
        for(int k=0;k<n;k++){
            cin>>arr[k];
            if(__builtin_popcount(arr[k])!=__builtin_popcount(k+1))flag=false;
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}