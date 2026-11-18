/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SQUASH                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 18, 2026                                           ║
 ║  URL      : https://www.codechef.com/START265C/problems/SQUASH          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n,z;
        cin>>n>>z;
        string s;
        string str;
        cin>>s;
        str+=s[0];
        for(int k=1;k<n;k++){
            if(s[k]!=s[k-1]){
                str+=s[k];
            }
        }
        if(z>=str.length() && z<=n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}