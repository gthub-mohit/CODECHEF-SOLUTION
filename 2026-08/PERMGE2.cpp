/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PERMGE2                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 29, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/PERMGE2                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int x , y ,z;
        cin>>x>>y>>z;
        if(y==0 && x<=z+1 || x<=z)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;

}