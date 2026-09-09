/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BTCMINE                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 9, 2026                                           ║
 ║  URL      : https://www.codechef.com/START255C/problems/BTCMINE         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long x,y;
        cin>>x>>y;
        for(int k=1;;k++){
            bool ok=false;
            long long sum=0;
            for(int m=1;m<=k;m++){
                long long total=sum+(long long)(k-m+1)*m*m;
                if(y * total > x * m){
                    ok=true;
                    break;
                }
                sum+=(long long)m*m;
            }
            if(ok){
                cout<<k<<endl;
                break;
            }
        }
    }
    return 0;
}