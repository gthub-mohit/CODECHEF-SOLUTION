/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MEBA                                                        ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 4, 2026                                                ║
 ║  URL      : https://www.codechef.com/problems/MEBA?tab=statement        ║
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
        sort(arr.begin(), arr.end());
        if(n==1)cout<<"YES"<<endl;
        else if(n==2){
            if(arr[0]==arr[1] || arr[1]==0 || arr[0]==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            bool found=true;
            for(int k=0;k<n-1;k++){
                if(arr[k]==0)continue;
                else if(arr[k]!=arr[k+1]){
                    found=false;
                    break;
                }
            }
            if(found)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }