/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHOCCUT                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 30, 2026                                          ║
 ║  URL      : https://www.codechef.com/START258C/problems/CHOCCUT         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , m;
        cin>>n>>m;
        if(n%2==0 || m%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}