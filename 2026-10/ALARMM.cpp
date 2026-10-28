/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ALARMM                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 28, 2026                                            ║
 ║  URL      : https://www.codechef.com/START262C/problems/ALARMM          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n ,z;
        cin>>n>>z;
        string s;
        cin>>s;
        int found =0;
        for(int k=0;k<n;k++){
            if(s[k]=='1'){
                found++;
                k+=z;
            }
        }
        cout<<found<<endl;
    }
    return 0;
}