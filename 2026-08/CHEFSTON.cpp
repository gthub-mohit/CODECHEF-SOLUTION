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
        vector<int> a(n);
        for(int k=0;k<n;k++){
            cin>>a[k];
            a[k]=j/a[k];
        }
        vector<int> b(n);
        for(int k=0;k<n;k++){
            cin>>b[k];
        }
        int maxi=0;
        for(int k=0;k<n;k++){
            int product=a[k]*b[k];
            maxi=max(maxi , product);
        }
        cout<<maxi<<endl;
    }
    return 0;
}