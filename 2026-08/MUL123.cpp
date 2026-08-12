/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MUL123                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/START251C/problems/MUL123          ║
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
        int x=n;
        int count1=0;
        while(x%3!=0){
            x++;
            count1++;
        }
        x=n;
        int count2=1;
        x=((x/5)+1)*5;
        while(x%3!=0){
            x++;
            count2++;
        }
        cout<<min(count1,count2)<<endl;
    }
    return 0;
}