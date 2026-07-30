/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : NITIKA                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 30, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/NITIKA?tab=statement      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

using namespace std;
int main(){
    int i;
    cin>>i;
    cin.ignore();
    while(i--){
        string s;
        getline(cin ,s);
        stringstream s1(s);
        vector<string> name;
        string part;
        while(s1>>part){
            name.push_back(part);
        }
        for(int k=0;k<name.size()-1;k++){
            cout<<(char)toupper(name[k][0])<<".";
        }
        string last=name.back();
        last[0] = toupper(last[0]);
        for(int k=1;k<=last.length();k++){
            last[k]==tolower(last[k]);
        }
        cout<<last<<endl;
    }
    return 0;
}