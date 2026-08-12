/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : NUMGAME2                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/NUMGAME2                  ║
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
        if(n%2!=0)cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
    return 0;
}