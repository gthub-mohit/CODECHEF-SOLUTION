/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : UNPALIN                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 18, 2026                                           ║
 ║  URL      : https://www.codechef.com/START265C/problems/UNPALIN         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& arr,int x){
    vector<int> v;
    for(int k=0;k<arr.size();k++){
        if(arr[k]!=x)v.push_back(arr[k]);
    }
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]!=v[j])return false;
        i++;
        j--;
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
        vector<int> vis(n+1,0);
        for(int k=0;k<n;k++){
            cin>>arr[k];
            vis[arr[k]]=1;
        }