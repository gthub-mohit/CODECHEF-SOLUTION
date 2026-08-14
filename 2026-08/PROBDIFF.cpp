/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PROBDIFF                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 14, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/PROBDIFF                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int a[11]={0};
        for(int k=0;k<4;k++){
            int x;
            cin>>x;
            a[x]++;
        }
        int maxi=0;
        for(int k=1;k<=10;k++){
            maxi=max(maxi,a[k]);
        }
        cout<<min(2,4-maxi)<<endl;
    }
    return 0;
}