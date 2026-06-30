/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BIGSALE                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : June 30, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/BIGSALE                   ║
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
        double loss=0.0;
        for(int k=0;k<n;k++){
            double price , quantity , discount;
            cin>>price>>quantity>>discount;
            loss+=price * (discount/100) * (discount/100) * quantity;
        }
        cout<<fixed<<setprecision(6)<<loss<<endl;
    }
    return 0;
}