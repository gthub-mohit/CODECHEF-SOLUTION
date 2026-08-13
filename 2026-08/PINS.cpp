/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PINS                                                        ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 13, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/PINS?tab=statement        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        int zeros = n/2;
        cout<<1<<" "<<"1";
        for(int k=0;k<zeros;k++){
        cout<<'0';
        }
    cout<<endl;
    }
    return 0;
    }
