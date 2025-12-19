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

        int l = 0, a = 0, b = 0;
        cin >> l >> a >> b;

        vector<int>h(l);

        for(int i = 0; i < l; i++) h[i] = i;


        int ans = 0;


        for(int i = a; i < b * l; i+=b) ans = max(ans, h[i % l]);


        cout << ans << "\n";



    }




    return 0;
}

