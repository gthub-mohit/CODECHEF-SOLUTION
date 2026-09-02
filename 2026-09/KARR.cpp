/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : KARR                                                        ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 2, 2026                                           ║
 ║  URL      : https://www.codechef.com/problems/KARR                      ║
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
        vector<int> p(n);
        for(int k=0;k<n;k++)cin>>p[k];
        bool flag=true;
        for(int k=0;k<n-1;k++){
            if(p[k]>p[k+1]){flag=false;break;}
            else continue;
        }
        if(!flag){
            int ans=*max_element(p.begin() , p.end())+1;
            cout<<ans<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}