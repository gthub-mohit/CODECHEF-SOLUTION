/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PGNATK                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 23, 2026                                          ║
 ║  URL      : https://www.codechef.com/START257C/problems/PGNATK          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n,z;
        cin>>n>>z;
        int count=0;
        int minute=0;
        while(count<n){
            minute++;
            if(minute%z!=0) count++;
        }
        cout<<minute<<endl;
    }
    return 0;
}