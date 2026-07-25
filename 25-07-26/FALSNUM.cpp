/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FALSNUM                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 25, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/FALSNUM                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        string a;
        cin>>a;
        string b;
        // for(int k =0;k<a.length();k++){
            if(a[0]!='1') b='1'+a;
            else{
                b=a;
                b.insert(1 , "0");
            }
        // }
        cout<<b<<endl;
    }
    return 0;
}