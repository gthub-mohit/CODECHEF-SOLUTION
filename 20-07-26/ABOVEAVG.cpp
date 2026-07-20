/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ABOVEAVG                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 20, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/ABOVEAVG                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , m , x;
        cin>>n>>m>>x;
        if(m==x)cout<<0<<endl;
        else cout<<n-1<<endl;
    }
    return 0;
}