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
            long long xs=ts;
            long long z=1;
            while(xs%2==0){
                xs/=2;
                z*=2;
            }
            z*=2;
            cout<<ts/z<<endl;
        }
    }
    return 0;
}