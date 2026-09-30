/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SEATING7                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 30, 2026                                          ║
 ║  URL      : https://www.codechef.com/START258C/problems/SEATING7        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n,m,z;
        cin>>n>>m>>z;
        vector<int> arr(m);
        for(int k=0;k<m;k++){
            cin>>arr[k];
        }
        for(int k=1;k<=n && z>0;k++){
            if(find(arr.begin(),arr.end(),k)==arr.end()){
                cout<<k<<" ";
                arr.push_back(k);
                z--;
            }
        }
        cout<<endl;
    }

    return 0;
}