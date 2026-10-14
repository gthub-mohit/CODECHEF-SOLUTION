/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BLUEBLACK                                                   ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://www.codechef.com/START260C/problems/BLUEBLACK       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    cout<<min(3*a , a+b);
    return 0;
}