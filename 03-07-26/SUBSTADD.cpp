/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SUBSTADD                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 3, 2026                                                ║
 ║  URL      : https://www.codechef.com/problems/SUBSTADD                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , x , y;
        cin>>n>>x>>y;
        vector<int> a(n);
        vector<int> b(n);
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        for(int k=0;k<n;k++){
            cin>>b[k];
        }
        bool found=true;
        for(int k=0;k<n;k++){
            if(b[k] != a[k] + x && b[k] != a[k] + y){
                found=false;
                break;
            }
        }
        if(found)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}