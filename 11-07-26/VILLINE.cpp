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
    long long n;
    cin>>n;
    long long m , c;
    cin>>m>>c;
    int p1=0;
    int p2=0;
    for(int k=0;k<n;k++){
        long long x , y , p;
        cin>>x>>y>>p;
        long long divison=y-m*x-c;
        if(divison>0)p1+=p;
        else p2+=p;
    }
    cout<<max(p1 , p2)<<endl;
    return 0;
}