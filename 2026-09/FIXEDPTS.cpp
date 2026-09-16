/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FIXEDPTS                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 16, 2026                                          ║
 ║  URL      : https://www.codechef.com/START256C/problems/FIXEDPTS        ║
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
        if(n-k==1)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}