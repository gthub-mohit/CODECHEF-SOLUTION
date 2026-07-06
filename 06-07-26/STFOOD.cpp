/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : STFOOD                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 6, 2026                                                ║
 ║  URL      : https://www.codechef.com/problems/STFOOD                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin >> n;
        int max_profit = 0;
        for(int k=0;k<n;k++){
            int s, p, v;
            cin>>s>>p>>v;
            int customers= p / (s + 1);
            int curr_profit = customers*v;
            if(curr_profit > max_profit){
                max_profit = curr_profit;
            }
        }
        
        cout << max_profit << "\n";
    }
    return 0;
}