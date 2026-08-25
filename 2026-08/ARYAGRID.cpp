/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ARYAGRID                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 25, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/ARYAGRID                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , m , x , y , l;
        cin>>n>>m>>x>>y>>l;
        long long rows = 1+(x-1)/l+(n-x)/l;
        long long cols = 1+(y-1)/l+(m-y)/l;
        cout<<rows*cols<<endl;
    }
    return 0;
}