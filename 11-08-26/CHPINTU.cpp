/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHPINTU                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 11, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/CHPINTU                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        int n,m;
        cin>>n>>m;
        vector<int> f(n);
        for (int k=0;k<n;k++) {
            cin>>f[k];
        }
        vector<int> p(n);
        for (int k=0;k<n;k++) {
            cin>>p[k];
        }
        vector<int> cost(m+ 1,0);
        vector<bool> present(m+1, false);
        for (int k=0;k<n;k++) {
            cost[f[k]]+=p[k];
            present[f[k]] = true;
        }
        int ans=INT_MAX;
        for (int k=0;k<=m;k++) {
            if (present[k]) {
                ans = min(ans, cost[k]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}