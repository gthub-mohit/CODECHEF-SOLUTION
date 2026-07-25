/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : NAME2                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 25, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/NAME2                     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        string a, b;
        cin>>a>>b;
        if(a.length() > b.length()){
            swap(a, b);
        }
        int p1 = 0, p2 = 0;
        while(p1 < a.length() && p2 < b.length()){
            if(a[p1] == b[p2]){
                p1++;
            }
            p2++;
        }
        if(p1 == a.length()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}