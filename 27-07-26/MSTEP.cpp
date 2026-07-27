/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MSTEP                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 27, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/MSTEP?tab=statement       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    cin>>i;
    while(i--){
        int n;
        cin>>n;
        vector<pair<int, int>> pos(n * n + 1);
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                int val;
                cin>>val;
                pos[val] = {i, j};
            }
        }
        long long total_steps = 0;
        for(int val = 1; val < n * n; val++){
            int r1 = pos[val].first;
            int c1 = pos[val].second;
            int r2 = pos[val + 1].first;
            int c2 = pos[val + 1].second;

            total_steps += abs(r1 - r2) + abs(c1 - c2);
        }

        cout<<total_steps<<endl;
    }
    return 0;
}