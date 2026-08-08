/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PERMCLEAR                                                   ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 8, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/PERMCLEAR                 ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        int n;
        cin>>n;
        vector<int> a(n);
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        int z;
        cin>>z;
        vector<int> b(z);
        for(int k=0;k<z;k++){
            cin>>b[k];
        }
        vector<int> c;
        for(int k=0;k<n;k++){
        bool found=false;
            for(int j=0;j<z;j++){
                if(a[k]==b[j]){found=true; break;}
            }
            if(!found)c.push_back(a[k]);
        }
        for(auto it : c){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}