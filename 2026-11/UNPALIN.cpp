/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : UNPALIN                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 18, 2026                                           ║
 ║  URL      : https://www.codechef.com/START265C/problems/UNPALIN         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    while(i<j){
        if(v[i]!=v[j])return false;
        i++;
        j--;
    }

    return true;
}
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;

        vector<int> arr(n);
        vector<int> vis(n+1,0);

        for(int k=0;k<n;k++){
            cin>>arr[k];
            vis[arr[k]]=1;
        }

        int l=0,r=n-1;

        while(l<r && arr[l]==arr[r]){
            l++;
            r--;