/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : GMINEQ                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : June 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/GMINEQ?tab=statement      ║
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
        int count1=0;
        int count2=0;
        for(int k=0;k<n;k++){
            cin>>arr[k];
            if(arr[k]==1)count1++;
            else count2++;
        }
        if(count1==0 || count2==0)cout<<"No"<<endl;
        else if(count1 == count2)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}