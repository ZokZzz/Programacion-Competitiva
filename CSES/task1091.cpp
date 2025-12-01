#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, m = 0;
    cin >> n >> m;

    multiset<int> a;

    for(int i = 0; i < n; i++){

        int aux = 0;
        cin >> aux;
        a.insert(aux);

    }


    for(int i = 0; i < m; i++){

        int target = 0;
        cin >> target;

        auto it = a.upper_bound(target);

        if (it != a.begin()) {
            --it;
            cout << *it << "\n";
            a.erase(it);

        } else cout << -1 << "\n";

    }


    return 0;
}

