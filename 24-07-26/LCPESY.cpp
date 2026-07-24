/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : LCPESY                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 24, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/LCPESY                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        string a;
        cin>>a;
        sort(a.begin() , a.end());
        string b;
        cin>>b;
        sort(b.begin() , b.end());
        int p1 = 0;
        int p2=0;
        int count=0;
        while(p1<a.length() && p2<b.length()){
            if(a[p1]==b[p2]){
                p1++;
                p2++;
                count++;
            }
            else if(a[p1]<b[p2])p1++;
            else p2++;
        }
        cout<<count<<endl;
    }
    return 0;
}