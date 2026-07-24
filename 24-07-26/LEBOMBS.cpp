/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : LEBOMBS                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 24, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/LEBOMBS?tab=statement     ║
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
        int count=0;
        for(int k=0;k<n;k++){
            if(s[k]=='0' && ((s[k-1]=='0'||k==0) &&(s[k+1]=='0' ||k==n-1))){
              count++;
            }
        }
            cout<<count<<endl;
    }
    return 0;
}