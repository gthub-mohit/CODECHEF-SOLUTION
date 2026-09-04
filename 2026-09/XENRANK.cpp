/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : XENRANK                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 4, 2026                                           ║
 ║  URL      : https://www.codechef.com/problems/XENRANK                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long u,v;
        cin>>u>>v;
        long long ans=((u+v)*(u+v+1))/2+u+1;
        cout<<ans<<endl;
    }
    return 0;
}