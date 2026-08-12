/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BUSROW                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/START251C/problems/BUSROW          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n,m,x;
        cin>>n>>m>>x;
        int row=0;
        for(int i=1;i<=n;i++){
            if(x>=(i-1)*m+1 && x<=i*m)
            row=i;
        }
        cout<<min(row,n-row+1)<<endl;
    }
    return 0;
}