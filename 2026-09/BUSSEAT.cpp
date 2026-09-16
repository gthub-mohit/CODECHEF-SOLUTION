/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BUSSEAT                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 16, 2026                                          ║
 ║  URL      : https://www.codechef.com/START256C/problems/BUSSEAT         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , k;
        cin>>n>>k;
        if(k<=n)cout<<0<<endl;
        else cout<<(k-n)*2<<endl;
    }
    return 0;
}