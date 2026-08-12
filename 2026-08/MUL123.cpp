/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MUL123                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/START251C/problems/MUL123          ║
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
        int ans=100;
        for(int i=0;i<=10;i++){
            int x=n+i;
            if(x%3==0)
                ans=min(ans,i);
            int next=((x/5)+1)*5;
            if(next%3==0)
                ans=min(ans,i+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}