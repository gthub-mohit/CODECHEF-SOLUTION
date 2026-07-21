/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FANCY                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 21, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/FANCY                     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    cin.ignore();
    while(i--){
        string s;
        getline(cin , s);
        string find = "";
        bool found=false;
        for(char ch : s){
            if(ch==' '){
                if(find=="not"){found=true;break;}
                find="";
            }
            else{
                find+=ch;
            }
        }
        if(find=="not")found=true;
        if(found)cout<<"Real Fancy"<<endl;
        else cout<<"regularly fancy"<<endl;
    }
    return 0;
}