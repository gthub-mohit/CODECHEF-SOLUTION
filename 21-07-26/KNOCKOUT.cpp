/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : KNOCKOUT                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 21, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/KNOCKOUT?tab=statement    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        vector<int> arr(16);
        for(int k=0;k<16;k++){
            cin >> arr[k];
        }
        vector<int> v1=arr;
        sort(v1.begin(), v1.end());
        for(int k=0;k<16;k++){
            int rank=lower_bound(v1.begin(), v1.end(), arr[k])-v1.begin();
            int wins=0;
            if(rank==15) wins=4;
            else if(rank>=7) wins=3;
            else if(rank>=3) wins=2;
            else if(rank>=1) wins=1;
            else wins=0;
            cout<<wins<<" ";
        }
        cout<<endl;
    }

    return 0;
}