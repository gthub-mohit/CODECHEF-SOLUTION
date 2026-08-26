/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : POSHOP                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 26, 2026                                             ║
 ║  URL      : https://www.codechef.com/START253C/problems/POSHOP          ║
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
        int maxi=0;
        for(int k=0;k<n;k++){
            if(arr[k]>maxi)
                maxi=arr[k];
        }
        for(int k=0;k<n;k++){
            for(int j=k+1;j<n;j++){
                if(arr[k]<=arr[j]){
                    if(arr[k]+arr[j]>maxi) maxi=arr[k]+arr[j];
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}