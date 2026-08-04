/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : DISPAL                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 4, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/DISPAL                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    while(i--){
        int n, k;
        cin>>n>>k;
        if(k==1){
            for(int z=0;z<n;z++)cout<<"a";
            cout<<endl;
        }
        else if(((n%2==0 && k%2==0) || (n%2==1 && k%2==1)) && k!=n){
            if (k>(n+1)/2) {
                cout<<-1<<endl;
            } else{
                string half_s= "";
                for (int z=0;z<k;z++)half_s=(char)('a' + z);
                while (half_s.length()<(n+1)/2)half_s+='a';
                cout<<half_s;
                int start;
                if(n%2==1) start=(n+1)/2 - 2;
                else start = (n+1)/2 - 1;
                for(int z=start;z>=0;z--)cout<<half_s[z];
                cout<<endl;
            }
        }
        else cout<<-1<<endl;
    }
    return 0;
}