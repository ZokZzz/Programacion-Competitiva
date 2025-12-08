
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()

const long long m = 1000000007;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    long long n = 0, ans = 0;
    cin >> n;

    while(n){

       n /= 5;
       ans += n;

    }

    cout << ans << "\n";


    return 0;
}


