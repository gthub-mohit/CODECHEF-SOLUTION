/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SSCRIPT                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 26, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/SSCRIPT                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n , z;
        cin>>n>>z;
        string s;
        cin>>s;
        int count=0;
        bool strong=false;
        for(int k=0;k<n;k++){
            if(s[k]=='*'){
                count++;
            if(count==z){
                strong=true;
                break;
            }
            }
            else count=0;
        }
        if(strong)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}