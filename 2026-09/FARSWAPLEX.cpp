/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FARSWAPLEX                                                  ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 16, 2026                                          ║
 ║  URL      : https://www.codechef.com/START256C/problems/FARSWAPLEX      ║
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
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        for(int k=0;k<n;k++){
            for(int j=k;j>0;j--){
                if(abs(arr[j]-arr[j-1])>1)swap(arr[j-1] , arr[j]);
                else break;
            }
        }
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}