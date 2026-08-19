/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MEXMAX7                                                     ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 19, 2026                                             ║
 ║  URL      : https://www.codechef.com/START252C/problems/MEXMAX7         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        for(int k=0;k<n;k++){
            cin>>arr[k];
            count[arr[k]]++;
        }
        vector<long long> power(n+2,1);
        for(int k=1;k<=n+1;k++){
            power[k]=(power[k-1]*2)%mod;
        }
        long long ans=0;
        ans+=(power[count[1]]-1);
        ans%=mod;
        for(int k=1;k<=n;k++){
            long long sum=1;
            for(int j=0;j<k;j++){
                sum*=power[count[j]]-1;
                sum%=mod;
            }
            ans+=sum;
            ans%=mod;
            if(k+1<=n){
                ans+=sum*(power[count[k+1]]-1);
                ans%=mod;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}