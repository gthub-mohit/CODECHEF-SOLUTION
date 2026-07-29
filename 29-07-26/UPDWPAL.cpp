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
bool isPalindrome(vector<int> arr, int n){
    for(int k=0; k<n/2; k++){
        if(arr[k] != arr[n-1-k]){
            return false;
        }
    }
    return true;
}
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
        vector<int> candidates;
        for(int k=0; k<n/2; k++){
            if(arr[k] != arr[n - 1 - k]){
                candidates.push_back(min(arr[k], arr[n - 1 - k]));
            }
        }
        if(candidates.empty()){
            cout<<"Yes"<<endl;