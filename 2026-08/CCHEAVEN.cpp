/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CCHEAVEN                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/CCHEAVEN                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        int count0=0;
        bool  found=false;
        int count1=0;
        for(int k=0;k<l;k++){
            if(s[k]=='0')count0++;
            else count1++;
            if(count1>=count0){
                found=true;
                break;
            }
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}