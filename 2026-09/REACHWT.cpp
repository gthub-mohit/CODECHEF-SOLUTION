/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : REACHWT                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 2, 2026                                           ║
 ║  URL      : https://www.codechef.com/START254C/problems/REACHWT         ║
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
        int ans=(n/2)*30+(n%2)*20;
        cout<<ans<<endl;
    }
    return 0;
}