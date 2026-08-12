/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHOCGM                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/START251C/problems/CHOCGM          ║
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
        long long s=0, odd=0;
        for(int k=0;k<n;k++){
            int x;
            cin>>x;
            s+=x;
            if(x%2!=0) odd++;
        }
        long long ans;
        if(s%2==0) ans=s-odd/2;
        else ans=odd/2;
        cout<<ans<<endl;
    }
    return 0;
}