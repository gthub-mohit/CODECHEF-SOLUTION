/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : UWCOI20B                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 8, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/UWCOI20B                  ║
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
        int odd=0;
        int even=0;
        for(int k=0;k<n;k++){
            cin>>arr[k];
            if(arr[k]%2==0)even++;
            else odd++;
        }
        cout<<odd*even<<endl;
    }
    return 0;
}