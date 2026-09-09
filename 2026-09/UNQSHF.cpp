/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : UNQSHF                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 9, 2026                                           ║
 ║  URL      : https://www.codechef.com/START255C/problems/UNQSHF          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    int i;
    cin>>i;
    while(i--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        string b;
        cin>>b;
        int count1a=0;
        int count1b=0;
        int count2a=0;
        int count2b=0;
        for(int k=0;k<n;k++){
            if(a[k]=='a')count1a++;
            else count1b++;
        }
        for(int k=0;k<n;k++){
            if(b[k]=='a')count2a++;
            else count2b++;
        }
        if(count1a!=count2b )cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}