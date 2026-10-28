/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EQLZR                                                       ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 28, 2026                                            ║
 ║  URL      : https://www.codechef.com/START262C/problems/EQLZR           ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        cin>>n;
        vector<int> arr(n);
        for(int k=0;k<n;k++) cin>>arr[k];
        int count=0;
        for(int k=0;k<n-1;k++){
            if(arr[k]==arr[k+1]) count++;
        }
        int maxi=count;
        for(int k=0;k<n;k++){
            for(int z=k;z<n;z++){
                int x=count;
                if(k>0){
                    if(arr[k-1]==arr[k]) x--;
                    else if(arr[k-1]==arr[k]+1) x++;
                }
                if(z<n-1){
                    if(arr[z]==arr[z+1]) x--;
                    else if(arr[z]+1==arr[z+1]) x++;
                }
                maxi=max(maxi,x);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}