#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define p1(i,n) for(int i=1; i<n; i++)
#define vec vector<int>
#define pb push_back
#define ll long long

class K {
    public:
        void solution() {
            int n; cin >> n;
            vec v, r;
            f(n) {
                int a; cin >> a;
                v.pb(a); r.pb(n + 1 - a);
            }
            
            f(n) {cout << r[i] << " ";}
            cout << "\n";
        }
};

int main() {
    int t; 
    cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
