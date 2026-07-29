/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : GPUBUY                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/START249C/problems/GPUBUY          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z <= y)cout<<-1<<endl;
        else{
            int net = z - y;
            int total = (x + net - 1) / net;
            cout<<total<<endl;
        }
    }
    return 0;
}