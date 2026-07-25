/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : APLUSB                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 25, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/APLUSB?tab=statement      ║
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
        vector<int> a(n);
        vector<int> b(n);
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        sort(a.begin() , a.end());
        for(int k=0;k<n;k++){
            cin>>b[k];
        }
        bool flag=true;
        sort(b.begin(), b.end(), greater<int>());
        for(int k=0;k<n;k++){
            if(a[k]+b[k]!=b[0]+a[0]){
                flag=false;
                break;
            }
        }
        if(!flag)cout<<-1<<endl;
        else {
            for(int k=0;k<n;k++){