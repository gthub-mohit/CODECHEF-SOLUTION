/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ANOTSTR                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 7, 2026                                             ║
 ║  URL      : https://www.codechef.com/START259C/problems/ANOTSTR         ║
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
        string a,b;
        cin>>a>>b;
        int count1=0;
        int count2=0;
        for(int k=0;k<n;k++){
            if(a[k]=='1')count1++;
            if(b[k]=='1')count2++;
        }
        if(count1%2==count2%2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}