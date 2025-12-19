
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()

string addLeft(string l, string r){

    return l + r;

}

string addRight(string l, string r){

    return r + l;

}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

       int n = 0;
       cin >> n;

       vector<string> a(n);

       for(int i = 0; i < n; i++) cin >> a[i];

       string ans = a[0], current = ans;

       for(int i = 1; i < n; i++) {

            current = a[i];

            if(addLeft(ans, current) > addRight(ans, current)){

               ans =  addRight(ans, current);

            } else {

               ans = addLeft(ans, current);

            }



       }

        cout << ans << "\n";

    }




    return 0;
}

