/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : LARGESUB                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 28, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/LARGESUB                  ║
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
        int count1=-1;
        int count2=-1;
        int maxi=1;
        for(int k=0;k<n;k++){
            if(s[k]=='a'){
                if(count1==-1) count1=k;
                else maxi=max(maxi,k-count1+1);
            }
            else{
                if(count2==-1) count2=k;
                else maxi=max(maxi,k-count2+1);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}