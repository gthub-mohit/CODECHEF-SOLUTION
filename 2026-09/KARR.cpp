/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : KARR                                                        ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 2, 2026                                           ║
 ║  URL      : https://www.codechef.com/problems/KARR?tab=statement        ║
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
        vector<int> p(n);
        for(int k=0;k<n;k++)cin>>p[k];
        int count=-1;
        for(int k=0;k<n;k++){
            if((k+1)!=p[k])count=k+1;
        }
        cout<<count+1<<endl;
    }
    return 0;
}