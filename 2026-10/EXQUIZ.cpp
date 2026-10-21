/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EXQUIZ                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 21, 2026                                            ║
 ║  URL      : https://www.codechef.com/START261C/problems/EXQUIZ          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n,s;
        cin>>n>>s;
        int c,w,ans;
        if(s==0)ans=0;
        else{
            c=(s+3)/4;
            w=4*c-s;
            ans=c+w;
            if(ans>n)ans=-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}