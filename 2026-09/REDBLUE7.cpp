/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : REDBLUE7                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 16, 2026                                          ║
 ║  URL      : https://www.codechef.com/START256C/problems/REDBLUE7        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    while(i--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        sort(arr.begin(), arr.end());
        int total = 0;
        for(int k=0;k<n;k++){
            total+=arr[k];
        }
        int sr = 0;
        int ans = 0;
        for(int k=0;k<n;k++){
            sr+=arr[k];
            int cr = k+1;
            int cb = n-cr;
            int sb= total-sr;
            int maxi=sr*cb+sb*cr;
            ans = max(ans,maxi);
        }
        cout<<ans<< endl;
    }
    return 0;
}