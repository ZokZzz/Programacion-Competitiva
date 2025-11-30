#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;

        string s;
        cin >> s;

        stack<char> sorner;

        int c = 0;

        for(int i = 0; i < n; i++){

            if(s[i] == '(' ) {

               sorner.push('(');

            }


            if(s[i] == ')' && !(sorner.empty())) {

                    sorner.pop();
                    c++;


            }



        }



        cout << (n/2) - c << "\n";


    }




    return 0;
}
