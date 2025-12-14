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

        int n = 0, y = 0, r = 0;
        cin >> n >> y >> r;

        y = y/2;

        int total = y + r;

        if(total <= n) cout << total << "\n";
        else cout << n << "\n";




    }


    return 0;
}


