/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHFICRM                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 7, 2026                                                ║
 ║  URL      : https://www.codechef.com/problems/CHFICRM?tab=statement     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

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
                else {
                    possible = false;
                    break;
                }
            }
        }
        if (possible) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}