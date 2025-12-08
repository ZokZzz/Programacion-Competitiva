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

    int n;
    cin >> n;

    int total = 1 << n;

    for (int i = 0; i < total; i++) {

        int g = i ^ (i >> 1);

        for (int b = n - 1; b >= 0; b--) {

            cout << ((g >> b) & 1);

        }

        cout << "\n";

    }


    return 0;
}

