// 308247576                     28 Feb,2025, 02:52 PM                          Krishno_MD                         218 ms                      0 KB

// Suppose the array is 1 2 3 4 then according to condition the other array will be 4 3 2 1
// So, 4+1 = 5, 3+2 = 5, ........... If there is n elements, then the sum will be n+1

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
