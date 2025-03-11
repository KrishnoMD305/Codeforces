// 309981228                   11 March,2025, 07:37 PM                     Krishno_MD                   202 ms                     100 KB


// Here a theory: gcd(a,b) <= gcd(a,b,c) <= ......
// So if we can just find a pair whose gcd is less than 2 we got our answer


#include<bits/stdc++.h>
using namespace std;

// Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define vec vector<int>
#define pb push_back
#define ll long long

class K{
    public:
        void solution(){
            int n;
            cin >> n;
            vec v(n);
            f(n) cin >> v[i];

            int g = INT_MAX;
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    g = min(__gcd(v[i], v[j]), g);
                }
            }
            
            cout << (g > 2 ? "No" : "Yes") << "\n";
        }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        K solve;
        solve.solution();
    }
    return 0;
}
