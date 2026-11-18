/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : UNPALIN                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 18, 2026                                           ║
 ║  URL      : https://www.codechef.com/START265C/problems/UNPALIN         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int k=0;k<n;k++)cin>>arr[k];
        int l=0,r=n-1;
        while(l<r && arr[l]==arr[r]){
            l++;
            r--;
        }
        if(l>=r){
            cout<<"NO"<<endl;
        }
        else if(!check(arr,arr[l])){
            cout<<"YES "<<arr[l]<<endl;
        }
        else if(!check(arr,arr[r])){
            cout<<"YES "<<arr[r]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}