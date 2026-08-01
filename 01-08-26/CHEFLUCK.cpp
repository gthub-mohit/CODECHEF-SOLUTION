/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHEFLUCK                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 1, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/CHEFLUCK                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--) {
        long long n;
        cin>>n;
        long long ans= -1;
        for(long long count4=n;count4>=0;count4--){
            long long count7=n-count4;
            if(count4%7==0 && count7%4==0){
                ans=count4;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}