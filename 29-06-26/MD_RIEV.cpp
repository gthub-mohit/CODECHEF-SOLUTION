/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MD_RIEV                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : June 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/MD_RIEV?tab=statement     ║
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
        if(n<5){
            cout<<0<<" "<<n<<endl;
        }
        else 
        cout<<1<<" "<<n-1<<endl;
    }
    return 0;
}