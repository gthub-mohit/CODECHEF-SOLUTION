/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : REDBLUE7                                                    ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 16, 2026                                          ║
 ║  URL      : https://www.codechef.com/START256C/problems/REDBLUE7        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    cin>>i;
    while(i--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int k=0;k<n;k++){
            cin>>arr[k];
        }
        sort(arr.begin(), arr.end());
        long long total = 0;
        for(int k=0;k<n;k++){
            total+=arr[k];
        }
        long long sr = 0;
        long long ans = 0;
        for(int k=0;k<n;k++){
            sr+=arr[k];
            long long cr = k+1;
            long long cb = n-cr;
            long long sb= total-sr;
            long long maxi=sr*cb+sb*cr;
            ans = max(ans,maxi);
        }
        cout<<ans<< endl;
    }
    return 0;
}