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

        vector<int> a (n);

        set<int> b;

        for(int i = 0; i < n; i++){cin >> a[i]; b.insert(a[i]);}

        int target = b.size();

        sort(all(a));

        for(int i = 0; i < n; i++){

            if(target <= a[i]){

                cout << a[i] << "\n";
                break;

            }

        }






    }




    return 0;
}

