/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EQPAIR                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : June 28, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/EQPAIR                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        int count=0;
        unordered_map<long long , long long> mpp;
        for(int k=0;k<n;k++){
            int z;
            cin>>z;
            mpp[z]++;
        }
        long long pairs=0;
        for(auto[key  , count ] : mpp){
            if (count>1){
                pairs+=(count*(count-1))/2;
            }
        }
        cout<<pairs<<endl;
    }
    return 0;
}