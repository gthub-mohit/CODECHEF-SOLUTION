/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : LEPERMUT                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 1, 2026                                                ║
 ║  URL      : https://www.codechef.com/problems/LEPERMUT                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

using namespace std;
int main() {
    int i;
    cin>>i;
    while(i--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool good = true;
        for (int i = 0; i < n; i++) {
            for (int j = i + 2; j < n; j++) {
                if (arr[i] > arr[j]) {
                    good = false;
                    break;
                }
            }
            if (!good) break;
        }
        if (good) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}