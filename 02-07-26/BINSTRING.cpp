/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BINSTRING                                                   ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 2, 2026                                                ║
 ║  URL      : https://www.codechef.com/problems/BINSTRING                 ║
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
        string s;
        cin>>s;
        int unique=0;
        for(int k=0;k<n;k++){
            if(s[k]!=s[k+1])unique++;
        }
        cout<<unique<<endl;
    }
    return 0;
}