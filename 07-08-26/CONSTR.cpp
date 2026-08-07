/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CONSTR                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 7, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/CONSTR?tab=statement      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        string u;
        cin >> u;
        string s = "";
        int i = 0;
        while (i < n) {
            char current_char = u[i];
            int count = 0;
            while (i < n && u[i] == current_char) {
                count++;
                i++;
            }
            if (count % 2 == 1) {
                s += current_char;
            } else {
                s += current_char;
                s += current_char;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}