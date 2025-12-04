#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"

int f(int a, int b) {

 if(a > b) return 1;

 if (a < b) return -1;

 return 0;


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        int a = 0, b = 0, c = 0, d = 0;
        cin >> a >> b >> c >> d;

        int ans = 0;

        if(f(a, c) + f(b, d) > 0) ans++;

        if(f(a, d) + f(b, c) > 0) ans++;

        if(f(b, c) + f(a, d) > 0) ans++;

        if(f(b, d) + f(a, c) > 0) ans++;


        cout << ans << "\n";



    }


    return 0;
}


