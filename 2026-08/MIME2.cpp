/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MIME2                                                       ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 30, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/MIME2?tab=statement       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    map<string,string> mp;
    for(int i=0;i<n;i++){
        string extension,type;
        cin>>extension>>type;
        mp[extension]=type;
    }
    while(q--){
        string s;
        cin>>s;
        int dot=s.find_last_of('.');
        if(dot==-1) cout<<"unknown"<<endl;
        else{
            string extension=s.substr(dot+1);
            if(mp.find(extension)!=mp.end()) cout<<mp[extension]<<endl;
            else cout<<"unknown"<<endl;
        }
    }
    return 0;
}