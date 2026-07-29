/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PRDEXC                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/START249C/problems/PRDEXC          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int x, y, z;
        cin>>x>>y>>z;
        int total = 0;
        while(x*y<z){
            if(x<y){
                x++;
            }
            else{
                y++;
            }
            total++;
        }
        cout<<total<<endl;
    }
    return 0;
}