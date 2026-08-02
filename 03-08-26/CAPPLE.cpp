/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CAPPLE                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 3, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/CAPPLE                    ║
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
        set<int> set;
        for(int k=0;k<n;k++){
            int a;
            cin>>a;
            set.insert(a);
        }
        cout<<set.size()<<endl;
    }
    return 0;
}