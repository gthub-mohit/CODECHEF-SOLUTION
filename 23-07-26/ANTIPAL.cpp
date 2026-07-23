/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ANTIPAL                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 23, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/ANTIPAL                   ║
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
        if(n%2!=0)cout<<-1<<endl;
        else {
            for(int k=0;k<n/2;k++)cout<<1;
            for(int k=n/2;k<n;k++)cout<<0;
        cout<<endl;
        }
    }
    return 0;
}