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

    vector< pair<int, int> > a;

    for(int i = 0; i < n; i++) {

       int c = 0, p = 0;
       cin >> c >> p;

       a.pb({p, c});

    }

    sort(a.rbegin(), a.rend());

    /*for(int i = 0; i < a.size(); i++) {

        cout << a[i].first << " " << a[i].second << "\n";

    }*/

    int q = 0, total = 0, cont = 0;
    cin >> q;

    vector<int> cap(q);

    for(int i = 0; i < q; i++) cin >> cap[i];

    multiset<int> t;

    for(int c : cap) t.insert(c);

    for(auto i : a) {

        auto it = t.lower_bound(i.second);

        if(it != t.begin()){

            cout << *it << " >= " << i.second << " ? \n";

            if(*it >= i.second){

            cout << "ENTRO\n";

            total += i.first;
            cont++;
            t.erase(it);

            }

        }


    }


    cout << cont << " " << total << "\n";






    return 0;
}

