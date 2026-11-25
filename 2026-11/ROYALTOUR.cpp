/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ROYALTOUR                                                   ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 25, 2026                                           ║
 ║  URL      : https://www.codechef.com/START266C/problems/ROYALTOUR       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        long long d=min(n-1,m-1)+n+m-2;
        long long a=max(r-1,c-1)+d;
        long long b=max(r-1,m-c)+d;
        long long e=max(n-r,c-1)+d;
        long long f=max(n-r,m-c)+d;
        cout<<min({a,b,e,f})<<endl;
    }
    return 0;
}