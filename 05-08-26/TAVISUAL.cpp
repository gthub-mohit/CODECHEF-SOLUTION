/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : TAVISUAL                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 5, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/TAVISUAL?tab=statement    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , c ,q;
        cin>>n>>c>>q;
        int l , r;
        for(int k=0;k<q;k++){
            cin>>l>>r;
            if(c>=l && c<=r){
                c=r-c+l;
            }
        }
        cout<<c<<endl; 
    }
    return 0;
}