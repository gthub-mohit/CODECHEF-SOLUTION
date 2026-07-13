/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : DRGNBOOL                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 13, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/DRGNBOOL?tab=statement    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    int i;
    cin>>i;
    while(i--){
        int n , m;
        cin>>n>>m;
        vector<int> soints(101, 0);
        for(int k=0;k<n;k++){
            int p ;
            int l;
            cin>>p>>l;
            soints[l]+=p;
        }
        vector<int> sofloats(101, 0);
        for(int k=0;k<m;k++){
            int p;
            int l;
            cin>>p>>l;
            sofloats[l]+=p;
        }
        int ans=0;
        for(int k=0;k<101; k++){
            if(soints[k]<sofloats[k])ans+=sofloats[k]-soints[k];
        }
        cout<<ans<<endl;
    }
    return 0;
}