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

        long long a = 0, b = 0;
        cin >> a >> b;

        if ((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)) cout << "YES\n";
        else cout << "NO\n";



    }




    return 0;
}

