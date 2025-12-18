#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


const long long MAX = 1000000000000;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    unordered_set<long long> cub;

    for(long long i = 1; i * i * i <= MAX; i++) cub.insert(i * i * i);

    int t = 0;
    cin >> t;

    while(t-->0){

        long long x = 0;
        cin >> x;

        bool f = false;

        for(long long i = 1; i * i * i <= x; i++){

            if(cub.count(x - i * i * i)){

                f = true;
                break;


            }


        }

        if(f) cout << "YES\n";
        else cout << "NO\n";

    }


    return 0;
}


