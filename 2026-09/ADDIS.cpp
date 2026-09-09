/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ADDIS                                                       ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 9, 2026                                           ║
 ║  URL      : https://www.codechef.com/START255C/problems/ADDIS           ║
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
        sort(a.begin(),a.end());
        int maxi=1;
        int count=1;
        for(int k=1;k<n;k++){
            if(a[k]==a[k-1]) count++;
            else count=1;
            maxi=max(maxi,count);
        }
        cout<<(maxi+1)/2<<endl;
    }
    return 0;
}