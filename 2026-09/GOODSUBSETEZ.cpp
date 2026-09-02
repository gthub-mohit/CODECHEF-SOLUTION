/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : GOODSUBSETEZ                                                ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 2, 2026                                           ║
 ║  URL      : https://www.codechef.com/START254C/problems/GOODSUBSETEZ    ║
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
        int freq[31]={0};
        int ans=0;
        for(int k=0;k<n;k++){
            int x=arr[k];
            int bit=0;
            while(x>1){
                x/=2;
                bit++;
            }
            freq[bit]++;
            ans=max(ans,freq[bit]);
        }
        cout<<ans<<endl;
    }
    return 0;
}