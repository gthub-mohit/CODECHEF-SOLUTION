/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EXKEYPAD                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 21, 2026                                            ║
 ║  URL      : https://www.codechef.com/START261C/problems/EXKEYPAD        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long n;
        int d;
        cin>>n>>d;
        while(true){
            long long temp = n;
            bool found = false;
            while(temp > 0){
                if(temp % 10 == d){
                    found = true;
                    break;
                }
                temp /= 10;
            }
            if(!found) break;
            n++;
        }

        cout<<n<<endl;
    }
    return 0;
}