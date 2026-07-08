/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : RYCARDS                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 8, 2026                                                ║
 ║  URL      : https://www.codechef.com/START246C/problems/RYCARDS         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int r , y;
        cin>>r>>y;
        int left_y=y-min(r,y);
        int ans=r+(left_y/2);
        cout<<ans<<endl;
    }
    return 0;
}