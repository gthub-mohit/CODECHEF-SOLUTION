/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SUBCOST7                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 5, 2026                                              ║
 ║  URL      : https://www.codechef.com/START250B/problems/SUBCOST7        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , x , y;
        cin>>n>>x>>y;
        if(n<=3)cout<<n*x<<endl;
        else cout<<3*x+(n-3)*y<<endl;
    }
    return 0;
}