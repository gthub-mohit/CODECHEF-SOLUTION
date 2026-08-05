/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ANADSW                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 5, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/ANADSW?tab=statement      ║
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
        if(n==3){
            if((arr[0]>=arr[1] )&& (arr[0]>=arr[2])&& (arr[2]<arr[1]))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(n==2){
            if(arr[1]<=arr[0])cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}