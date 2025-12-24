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

    while(t-->0) {

        int n = 0;
        cin >> n;

        if(n % 2 != 0){

            cout << 0 << "\n";
            continue;

        }


        int ans = 0;

        for(int a = 0; a <= n; a++){

            for(int b = 0; b <= n; b++) {

                if((4 * a) + (2 * b) == n) ans ++;

            }


        }

        cout << ans << "\n";


    }




    return 0;
}

