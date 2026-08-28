/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : COVSPRD                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 28, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/COVSPRD                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , d;
        cin>>n>>d;
        int res=0;
        if(d<=10)
        res=pow(2 , d);
        else 
        res=pow(2 , 10)*pow(3 , d-10);
        if(res>n)cout<<n<<endl;
        else cout<<res<<endl;
    }
    return 0;
}