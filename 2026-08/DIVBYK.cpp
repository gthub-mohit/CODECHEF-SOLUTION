/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : DIVBYK                                                      ║
 ║  Platform : CodeChef                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 16, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/DIVBYK                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        int n;
        long long k;
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(k==1){
            cout<<"YES"<<endl;
            continue;
        }
        vector<long long> p;
        for(long long i=2;i*i<=k;i++){
            if(k%i==0){
                p.push_back(i);
                while(k%i==0)
                    k/=i;
            }
        }
        if(k>1)
            p.push_back(k);
        int m=p.size();
        vector<int> dp(1<<m,0);