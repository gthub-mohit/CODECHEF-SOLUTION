/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MAKEPALAGAIN                                                ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 17, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/MAKEPALAGAIN?tab=statement║
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
        vector<int> odd(26,0);
        vector<int> even(26,0);
        for(int i=0;i<n;i++){
            if(i%2==0)
                odd[s[i]-'a']++;
            else
                even[s[i]-'a']++;
        }
        bool found=true;
        for(int i=0;i<26;i++){
            if(odd[i]!=even[i]){
                found=false;
                break;
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }