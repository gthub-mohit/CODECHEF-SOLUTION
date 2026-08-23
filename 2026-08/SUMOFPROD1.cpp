/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : SUMOFPROD1                                                  ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 23, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/SUMOFPROD1?tab=ide        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        int sum=0;
        for(int k=0;k<n;k++){
            int prod=1;
            for(int j=k;j<n;j++){
                prod=prod*arr[j];
                sum+=prod;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}