#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, l = 0;
    cin >> n >> l;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];


    sort(a.begin(), a.end());

    double left = a[0], right = l - a[n-1];

    double mid = 0;

    for(int i = 0; i < n-1; i++) {

        double aux = ((a[i+1] - a[i]) / 2.0);

        if(aux > mid) mid = aux;

    }


    double ans = max(left, max(right, mid));

    cout << fixed << setprecision(9) << ans << "\n";


    return 0;
}

