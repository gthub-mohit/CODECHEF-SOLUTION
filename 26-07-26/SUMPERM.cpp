/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SUMPERM                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 26, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/SUMPERM?tab=statement     ║
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
        int sum=(n*(n+1))/2;
        if(sum%n==0)cout<<-1<<endl;
        else{
        for(int k=1;k<=n;k+=2){
            cout<<k+1<<" "<<k<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}