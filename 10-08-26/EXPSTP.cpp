/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : EXPSTP                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 10, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/EXPSTP?tab=statement      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    static int compute(int n, int x, int y, int a, int b) {
        int r1=abs(x-a) + abs(y-b);
        int r2=min({x-1 , n-x , y-1 , n-y}) + 1;
        int r3=min({a-1 , n-a , b-1 , n-b}) + 1;
        return min(r1 , r2 +r3);
    }
};
