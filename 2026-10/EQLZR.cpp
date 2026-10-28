/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EQLZR                                                       ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 28, 2026                                            ║
 ║  URL      : https://www.codechef.com/START262C/problems/EQLZR           ║
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
        for(int k=0;k<n;k++) cin>>arr[k];
        int count=0;
        for(int k=0;k<n-1;k++){
            if(arr[k]==arr[k+1]) count++;
        }
        vector<int> left(n,0),right(n,0);
        for(int k=1;k<n;k++){
            if(arr[k-1]==arr[k]) left[k]=-1;
            else if(arr[k-1]==arr[k]+1) left[k]=1;
        }
        for(int k=0;k<n-1;k++){
            if(arr[k]==arr[k+1]) right[k]=-1;
            else if(arr[k]+1==arr[k+1]) right[k]=1;
        }
        int maxi=count;
        int x=0;
        for(int k=0;k<n;k++){
            x=max(x,left[k]);
            maxi=max(maxi,count+x+right[k]);