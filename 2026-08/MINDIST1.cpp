/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MINDIST1                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 22, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/MINDIST1                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int last=-1;
        int ans=2;
        for(int k=0;k<n;k++){
            if(s[k]=='1'){
                if(last!=-1){
                    if((k-last)%2!=0){
                        ans=1;
                        break;
                    }
                }
                last=k;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}