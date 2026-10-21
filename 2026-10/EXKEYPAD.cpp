/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EXKEYPAD                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 21, 2026                                            ║
 ║  URL      : https://www.codechef.com/START261C/problems/EXKEYPAD        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        string s;
        int d;
        cin>>s>>d;
        while(1){
            int k=0;
            while(k<s.size() && s[k]-'0'!=d)k++;
            if(k==s.size())break;
            int j=k;
            while(j>=0){
                int x=s[j]-'0'+1;
                while(x<=9 && x==d)x++;
                if(x<=9){
                    s[j]=char('0'+x);
                    for(int z=j+1;z<s.size();z++){
                        int y=0;
                        if(y==d)y++;
                        s[z]=char('0'+y);
                    }
                    break;
                }
                j--;