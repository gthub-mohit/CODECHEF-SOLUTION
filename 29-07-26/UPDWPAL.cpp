/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : UPDWPAL                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/START249C/problems/UPDWPAL         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        int n;
        cin>>n;
        vector<int> arr(n);
        for(int k=0; k<n; k++){
            cin>>arr[k];
        }
        vector<int> candidates;
        for(int k=0; k<n/2; k++){
            if(arr[k] != arr[n - 1 - k]){
                candidates.push_back(min(arr[k], arr[n - 1 - k]));
            }
        }
        if(candidates.empty()){
            cout<<"Yes"<<endl;
            continue;
        }
        bool possible = false;
        for(int k=0; k<candidates.size(); k++){
            int x = candidates[k];
            vector<int> arr1 = arr;
            for(int j=0; j<n; j++){
                if(arr1[j] <= x) arr1[j]++;
                else arr1[j]--;
            }
            if(isPalindrome(arr1, n)){
                possible = true;
                break;
            }