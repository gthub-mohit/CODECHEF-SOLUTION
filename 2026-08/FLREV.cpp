/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FLREV                                                       ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 26, 2026                                             ║
 ║  URL      : https://www.codechef.com/START253C/problems/FLREV           ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    cin>>i;
    while(i--) {
        int n;
        string s;
        cin>>n>>s;
        int count=0;
        for(int k=0;k<n-1;k++) {
            if(s[k]!=s[k+1])
                count++;
        }
        int beauty= n-count-1;
        if(count>=3) beauty+=2;
        else if(count==2) beauty+=1;
        cout<<beauty<<endl;
    }
    return 0;
}