/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SINGLEOP2                                                   ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 14, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/SINGLEOP2?tab=statement   ║
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
        bool found = false;
        for(int k=1;k<n;k++){
            if(s[k]=='1'&&!found){
                cout<<k<<endl;
                found=true;
                break;
            }
        }
        if(!found)cout<<n<<endl;
    }
    return 0;
}