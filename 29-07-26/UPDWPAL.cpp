/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : UPDWPAL                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/START249C/problems/UPDWPAL         ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        }
        if(x_cand1 == -1){
            cout<<"Yes"<<endl;
            continue;
        }
        bool possible = false;
        int cands[2] = {x_cand1, x_cand2};
        for(int c=0; c<2; c++){
            int x = cands[c];
            vector<int> arr1 = arr;
            for(int j=0; j<n; j++){
                if(arr1[j] <= x) arr1[j]++;
                else arr1[j]--;
            }

            if(isPalindrome(arr1, n)){
                possible = true;
                break;
            }
        }

        if(possible) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}