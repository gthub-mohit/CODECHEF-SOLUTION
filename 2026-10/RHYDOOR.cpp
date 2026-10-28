/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : RHYDOOR                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 28, 2026                                            ║
 ║  URL      : https://www.codechef.com/START262C/problems/RHYDOOR         ║
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
    int found=0;
    int count=1;
    for(int k=1;k<n;k++){
        if(s[k]==s[k-1])count++;
        else count=1;
        if(count==3){
            found++;
            count=0;
        }
    }
    cout<<found<<endl;
    }
    return 0;
}