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
        long long n,d;
        cin>>n>>d;
        while(1){
            string s=to_string(n);
            bool found=false;
            for(int k=0;k<s.size();k++){
                if(s[k]-'0'==d){
                    found=true;
                    break;
                }
            }
            if(found==false)break;
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
