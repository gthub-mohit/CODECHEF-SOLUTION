/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EOEO                                                        ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 23, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/EOEO?tab=statement        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin >> i;
    while(i--){
        long long ts;
        cin>>ts;
        if(ts%2==1) cout<<ts/2<<endl;
        else{
            int low=0;
            int high=60;
            int k=0;
            while(low<=high){
                int mid=(low + high) / 2;
                long long p=1LL<<mid;
                if(ts%p==0){
                    k = mid;
                    low = mid + 1;
                }
                else high=mid-1;
            }
            long long p=1LL<<(k+1);
            cout<<ts/p<<endl;
        }
    }
    return 0;
}