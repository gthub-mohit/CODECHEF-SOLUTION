/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PLACEROOKS                                                  ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 25, 2026                                           ║
 ║  URL      : https://www.codechef.com/START266C/problems/PLACEROOKS      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n,m;
        cin>>n>>m;
        vector<string> g(n,string(m,'.'));
        int ans=0;
        for(int k=0;k<n;k++){
            for(int j=0;j<m;j++){
                if((k+j)%2==0){
                    g[k][j]='R';
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        for(int k=0;k<n;k++){
            cout<<g[k]<<endl;
        }
    }
    return 0;
}