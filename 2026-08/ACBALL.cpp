/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ACBALL                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 21, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/ACBALL                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        string x;
        string y;
        cin>>x;
        cin>>y;
        for(int k=0;k<x.length();k++){
            if(x[k]=='W' && y[k]=='W')cout<<"B";
            else if(x[k]=='B' && y[k]=='B')cout<<"W";
            else cout<<"B";
        }
        cout<<endl;
    }
    return 0;
}