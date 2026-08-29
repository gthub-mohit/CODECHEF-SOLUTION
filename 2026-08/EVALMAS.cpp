/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EVALMAS                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 29, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/EVALMAS                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , x;
        cin>>n>>x;
        int z=n+1-x;
        if(z<0)cout<<-1<<endl;
        else {
            int star=z%2;
            int minus=z/2;
            if(star+minus>n)cout<<-1<<endl;
            else {
                for(int k=0;k<star;k++)cout<<'*';
                for(int k=0;k<minus;k++)cout<<'-';
                for(int k=0;k<n-star-minus;k++)cout<<'+';
            }
        }
        cout<<endl;
    }
    return 0;
}