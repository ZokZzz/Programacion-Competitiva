#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        long long n = 0, k = 0;
        cin >> n >> k;


        long long f = (n + k - 1) / k;

        long long ans = ((f*k) + n - 1) / n;

        cout << ans << "\n";



    }


    return 0;
}


