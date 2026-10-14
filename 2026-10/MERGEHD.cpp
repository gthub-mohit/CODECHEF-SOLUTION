/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MERGEHD                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://www.codechef.com/START260C/problems/MERGEHD         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        vector<int> ans(n+1,0);
        ans[0]=1;
        ans[n]=1;
        for(int k=1;k<n;k++){
            if(arr[k-1]<arr[k]){
                ans[k]=1;
            }
        }
        for(int k=0;k<=n;k++){
            cout<<ans[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
