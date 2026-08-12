/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHOCGM                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/START251C/problems/CHOCGM          ║
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
        int choco=0;
        int odd=0;
        for(int k=0;k<n;k++){
            cin>>arr[k];
            if(arr[k]%2==0) choco+=arr[k];
            else{
                choco+=arr[k]-1;
                odd++;
            }
        }
        int total=choco+odd;
        if(total%2==0 && odd>0) choco++;
        cout<<choco<<endl;
    }

    return 0;
}