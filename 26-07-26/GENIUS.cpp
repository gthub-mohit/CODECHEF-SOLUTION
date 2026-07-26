/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : GENIUS                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 26, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/GENIUS                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , x;
        cin>>n>>x;
        if(x%3==0){cout<<"YES"<<endl;cout<<x/3<<" "<<0<<" "<<n-(x/3)<<endl;}
        else if(x%3==1){
            cout<<"YES"<<endl;
            cout<<(x+2)/3<<" "<<2<<" "<<n-2-((x+2)/3)<<endl;
        }
        else if(x%3==2){
            cout<<"YES"<<endl;
            cout<<(x+1)/3<<" "<<1<<n-1<<" "<<((x+1)/3)<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}