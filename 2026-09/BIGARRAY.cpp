/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BIGARRAY                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 4, 2026                                           ║
 ║  URL      : https://www.codechef.com/problems/BIGARRAY                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n , s;
        cin>>n>>s;
        long long ans=(n*(n+1))/2-s;
        if(ans>=1 && ans<=n)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}