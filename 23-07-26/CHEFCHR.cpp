/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHEFCHR                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 23, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/CHEFCHR?tab=submissions   ║
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
        string a="cefh";
        int count=0;
        for(int i=0;i<(s.size());i++){
            string str=s.substr(i,4);
            sort(str.begin(),str.end());
            if(str==a) count++;
        }
        if(count==0) cout<<"normal"<<endl;
        else cout<<"lovely "<<count<<endl;
    }
}