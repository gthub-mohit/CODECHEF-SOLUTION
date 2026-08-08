/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PERMCLEAR                                                   ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 8, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/PERMCLEAR                 ║
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
        int z;
        cin>>z;
        unordered_set<int> set;
        for(int k=0;k<z;k++){
            int x;
            cin>>x;
            set.insert(x);
        }
        for(int x : a){
            if(!set.count(x))cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}