/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : DEVUGRAP                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 27, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/DEVUGRAP?tab=statement    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n, z;
        cin>>n>>z;
        long long mini = 0;
        long long cost = 0;
        vector<int>arr(n);
        for(long long k =0; k < n; k++){
            cin >> arr[k];
        }

        for(long long k = 0; k < n; k++){
            if(arr[k] < z)
                mini = z - arr[k];
            else
                mini = min(arr[k] % z, z - (arr[k] % z));

            cost += mini;
        }

        cout << cost << endl;
    }

    return 0;