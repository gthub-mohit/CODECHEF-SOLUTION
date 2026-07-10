/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : LOGICIAN                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 10, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/LOGICIAN?tab=submissions  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    cin>>i;
    while(i--){
        int n;
        cin>>n;
        string s;
        cin>>s;
    for(int k=0;k<s.length();k++){
            if(k==n-1 and s[k]=='1'){
                cout<<"YES"<<endl;
            }
            else{
                if(s[k]=='0'){
                    while(k!=n){
                        cout<<"NO"<<endl;
                        k++;
                    }
                }
                else{
                    cout<<"IDK"<<endl;
                    
                }
            }
       }
    }
    return 0;
}