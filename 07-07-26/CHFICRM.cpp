/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHFICRM                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 7, 2026                                                ║
 ║  URL      : https://www.codechef.com/problems/CHFICRM?tab=statement     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        cin >> n;
        vector<int> arr(n); 
        for (int k = 0; k < n; k++) {
            cin >> arr[k];
        }
        int count5 = 0; 
        int count10 = 0; 
        bool possible = true;
        for (int k = 0; k < n; k++) {
            if (arr[k] == 5) {
                count5++;
            } 
            else if (arr[k] == 10) {
                if (count5 > 0) {
                    count5--;  
                    count10++; 
                } else {
                    possible = false;
                    break; 
                }
            } 
            else if (arr[k] == 15) {
                if (count10 > 0) {
                    count10--; 
                } 
                else if (count5 >= 2) {
                    count5 -= 2; 
                } 