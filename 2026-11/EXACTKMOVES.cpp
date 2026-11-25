/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EXACTKMOVES                                                 ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 25, 2026                                           ║
 ║  URL      : https://www.codechef.com/START266C/problems/EXACTKMOVES     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , z;
        cin>>n>>z;
        if(n>=z && n<=2*z) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}