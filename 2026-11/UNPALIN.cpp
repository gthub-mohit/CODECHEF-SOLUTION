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
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int k=0;k<n;k++)cin>>arr[k];
        int l=0,r=n-1;
        while(l<r && arr[l]==arr[r]){
            l++;
            r--;
        }
        if(l>=r){
            cout<<"NO"<<endl;
            continue;
        }
        int x=arr[l];
        int y=arr[r];
        int a=0,b=n-1;
        while(a<b){
            if(arr[a]==x){
                a++;
                continue;
            }
            if(arr[b]==x){