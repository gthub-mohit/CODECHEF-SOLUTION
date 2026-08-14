/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHEFSTON                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 14, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/CHEFSTON                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n , j;
        cin>>n>>j;
        vector<long long> a(n);
        for(long long k=0;k<n;k++){
            cin>>a[k];
            a[k]=j/a[k];
        }
        vector<long long> b(n);
        for(long long k=0;k<n;k++){
            cin>>b[k];
        }
        long long maxi=0;
        for(long long k=0;k<n;k++){
            long long product=a[k]*b[k];
            maxi=max(maxi , product);
        }
        cout<<maxi<<endl;
    }
    return 0;
}