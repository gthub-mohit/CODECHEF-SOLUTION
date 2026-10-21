/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EXPRIZE                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 21, 2026                                            ║
 ║  URL      : https://www.codechef.com/START261C/problems/EXPRIZE         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n;
        cin>>n;
        long long l=1,r=2000000,ans=1;
        while(l<=r){
            long long mid=(l+r)/2;
            if(mid*mid*mid+5*mid<=6*n){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<endl;
    }

    return 0;
}
