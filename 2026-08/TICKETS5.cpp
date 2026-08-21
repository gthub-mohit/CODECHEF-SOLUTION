/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : TICKETS5                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 21, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/TICKETS5?tab=statement    ║
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
        unordered_set<char> set;
        for(int k=0;k<s.length();k++){
            set.insert(s[k]);
        }
        if(set.size()!=2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}