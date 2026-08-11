/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MINSM                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 11, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/MINSM                     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        int x=a[0];
        for(int k=0;k<n-1;k++){
            x=gcd( x , a[k]);
        }
        cout<<n*x<<endl;
    }
    return 0;
}