/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : REDALERT                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 12, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/REDALERT                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n , d , h;
        cin>>n>>d>>h;
        long long water=0;
        bool flood=false;
        for(int k=0;k<n;k++){
            int a;
            cin>>a;
            if(a>0){
                water+=a;
            }
            else water=max(0ll , water-d);
            if(water>=h)flood=true;
        }
        if(flood)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}