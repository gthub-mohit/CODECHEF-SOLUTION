/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ISPAR                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 4, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/ISPAR?tab=submissions     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n ,x;
        cin>>n>>x;
        if(x==1){
            if(n&1)cout<<"ODD"<<endl;
            else cout<<"EVEN"<<endl;
        }
        else if(x==2){
            cout<<"ODD"<<endl;
        }
        else cout<<"EVEN"<<endl;
    }
    return 0;
}