/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : TYPWRL                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 7, 2026                                             ║
 ║  URL      : https://www.codechef.com/START259C/problems/TYPWRL          ║
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
        string s,l;
        cin>>s>>l;
        int count=1;
        int maxi=1;
        for(int k=1;k<n;k++){
            bool x=false;
            bool y=false;
            for(int j=0;j<m;j++){
                if(s[k]==l[j])x=true;
                if(s[k-1]==l[j])y=true;
            }
            if(x==y)count++;
            else count=1;
            maxi=max(maxi,count);
        }
        cout<<maxi<<endl;
    }
    return 0;
}