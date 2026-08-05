/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BISHOPMV                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 5, 2026                                              ║
 ║  URL      : https://www.codechef.com/START250C/problems/BISHOPMV        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int x1 , x2 , y1 , y2;
        cin>>x1>>y1>>x2>>y2;
        if(abs(x1-x2)==abs(y1-y2))cout<<1<<endl;
        else if((x1+y1)%2!=(x2+y2)%2)cout<<-1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}