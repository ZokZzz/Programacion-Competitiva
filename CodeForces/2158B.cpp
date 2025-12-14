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

        vector<int> a (2 * n);

        for(int i = 0; i < 2 * n; i++) cin >> a[i];

        vector<int> freq(2 * n + 1, 0);

        for(int x : a) freq[x]++;

        int o = 0, e = 0;

        for(int i = 0; i < freq.size(); i++) {

        if(freq[i] > 0) {

        if(freq[i] % 2) o++;
        else e++;

        }

        }


        int ans = o + 2 * e;

        if(o == 0 && e % 2 != n % 2) ans -= 2;


        cout << ans << "\n";


    }


    return 0;
}



