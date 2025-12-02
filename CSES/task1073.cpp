#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    multiset<int> ans;

    for (int x : a) {

        auto it = ans.upper_bound(x);
        if (it != ans.end()) ans.erase(it);
        ans.insert(x);

    }


    cout << ans.size() << "\n";

    return 0;
}


