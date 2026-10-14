/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : DIFFGCD                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://www.codechef.com/START260C/problems/DIFFGCD         ║
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
        long long s =sqrt(n);
        long long sum =0;
        for(long long k =1;k<=s;k++){
            sum += n/k;
        }
        long long total= 2*sum-s*s;
        long long ans = total-n;
        cout<<ans<<endl;
    }
    return 0;
}