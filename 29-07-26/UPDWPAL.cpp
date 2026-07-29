/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : UPDWPAL                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/START249C/problems/UPDWPAL         ║
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
        vector<int> arr(n);
        for(int k=0; k<n; k++){
            cin>>arr[k];
        }
        int max_l = INT_MIN;
        int min_r = INT_MAX;
        bool possible = true;
        for(int k=0; k<n/2; k++){
            int x = arr[k];
            int y = arr[n - 1 - k];
            if(x != y){
                if(abs(x - y) != 2){
                    possible = false;
                    break;
                }
                int l = min(x, y);
                int r = max(x, y) - 1;
                max_l = max(max_l, l);
                min_r = min(min_r, r);
            }