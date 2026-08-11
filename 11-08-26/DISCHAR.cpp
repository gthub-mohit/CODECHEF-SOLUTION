/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : DISCHAR                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 11, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/DISCHAR                   ║
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
        for(auto it : s){
            set.insert(it);
        }
        cout<<set.size()<<endl;
    }
    return 0;
}