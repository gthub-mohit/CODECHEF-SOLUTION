/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : LEXOPAL                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 22, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/LEXOPAL                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        string s;
        cin>>s;
        int n=s.length();
        bool found=false;
        for(int k=0;k<n;k++){
            if(s[k] != s[n-k-1] && s[k] != '.' && s[n-k-1] != '.'){found=true;break;}
            else if(s[k]=='.' && s[n-1-k]=='.'){s[k]='a';s[n-k-1]='a';}
            else if(s[k]=='.')s[k]=s[n-k-1];
            else s[n-k-1]=s[k];
        }
        if(found)cout<<-1<<endl;
        else cout<<s<<endl;
    }
    return 0;
}