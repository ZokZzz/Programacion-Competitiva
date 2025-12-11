#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;

        string s;
        cin >> s;

        int c = 0;

        for(int i = 0; i < n; i++) if(s[i] == '1') c++;

        if(c == n) {
            cout << 0 << "\n";
            continue;

        }

        int ans = 0, current = 0;

        for(int i = 0; i < 2 * n; i++){

           if(s[i % n] == '0'){

                current ++;
           } else {

            ans = max(current, ans); current = 0;

           }



        }


        cout << ans << "\n";

    }




    return 0;
}

