/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SANDWICH7                                                   ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 30, 2026                                          ║
 ║  URL      : https://www.codechef.com/START258C/problems/SANDWICH7       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int b , h , c;
    cin>>b>>h>>c;
    cout<<min(b/2 , h+c);
    return 0;
}