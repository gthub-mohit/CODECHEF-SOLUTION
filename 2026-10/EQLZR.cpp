/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EQLZR                                                       ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 28, 2026                                            ║
 ║  URL      : https://www.codechef.com/START262C/problems/EQLZR           ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

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
        for(int l=0;l<n;l++){
            for(int r=l;r<n;r++){
                int count=0;
                for(int k=0;k<n-1;k++){
                    int a=arr[k];
                    int b=arr[k+1];
                    if(k>=l && k<=r)a++;
                    if(k+1>=l && k+1<=r)b++;
                    if(a==b)count++;
                }
                maxi=max(maxi,count);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}