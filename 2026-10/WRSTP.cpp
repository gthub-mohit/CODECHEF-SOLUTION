/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : WRSTP                                                       ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 7, 2026                                             ║
 ║  URL      : https://www.codechef.com/START259C/problems/WRSTP           ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        string s;
        cin>>s;
        int x=0,y=0;
        for(int k=0;k<n;k++){
            if(s[k]=='U')y++;
            else if(s[k]=='D')y--;
            else if(s[k]=='L')x--;
            else x++;
        }
        bool ans=false;
        for(int k=0;k<n;k++){
            int a=x;
            int b=y;
            if(s[k]=='U')b-=2;
            else if(s[k]=='D')b+=2;
            else if(s[k]=='L')a+=2;
            else a-=2;
            if(a==0 && b==0){
                ans=true;
                break;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}