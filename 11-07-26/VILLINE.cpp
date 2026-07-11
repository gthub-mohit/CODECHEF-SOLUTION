/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : VILLINE                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 11, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/VILLINE?tab=statement     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m , c;
    cin>>m>>c;
    int p1=0;
    int p2=0;
    for(int k=0;k<n;k++){
        int x , y , p;
        cin>>x>>y>>p;
        int divison=y-m*x-c;
        if(divison>0)p1+=p;
        else p2+=p;
    }
    cout<<max(p1 , p2)<<endl;
    return 0;
}