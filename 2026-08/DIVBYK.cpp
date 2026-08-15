/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : DIVBYK                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 15, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/DIVBYK                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

                while(k%i==0)
                    k/=i;
            }
        }
        if(k>1)
            p.push_back(k);
        int m=p.size();
        vector<int> dp(1<<m,0);
        dp[0]=1;
        for(int i=0;i<n;i++){
            int mask=0;
            for(int j=0;j<m;j++){
                if(a[i]%p[j]==0)
                    mask|=(1<<j);
            }
            for(int j=0;j<(1<<m);j++){
                if(dp[j]){
                    dp[j|mask]=1;
                }
            }
        }
        if(dp[(1<<m)-1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}