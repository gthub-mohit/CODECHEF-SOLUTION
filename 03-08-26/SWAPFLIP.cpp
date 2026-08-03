/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SWAPFLIP                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 3, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/SWAPFLIP                  ║
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
        string s;
        cin>>s;
        string t;
        cin>>t;
        int count0s= 0 , count1s=0 , count0t=0 , count1t=0;
        for(int k=0;k<n;k++){
            if(s[k]=='0')count0s++;
            else count1s++;
            if(t[k]=='1')count1t++;
            else count0t++;
        }
        if(n==1 && s==t)cout<<"YES"<<endl;
        else if(n==2 && (count0t && count0s)|| n==2 && (count1t && count0t))cout<<"NO"
            <<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}