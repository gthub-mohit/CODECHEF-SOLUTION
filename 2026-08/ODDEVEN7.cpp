/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ODDEVEN7                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 19, 2026                                             ║
 ║  URL      : https://www.codechef.com/START252C/problems/ODDEVEN7        ║
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
        int counteven=0;
        int countodd=0;
        for(int k=0;k<n;k++){
            cin>>arr[k];
            if(arr[k]%2==0)counteven++;
            else countodd++;
        }
        if(countodd==counteven)cout<<n<<endl;
        else cout<<2*min(counteven , countodd)+1<<endl;
    }
    return 0;
}