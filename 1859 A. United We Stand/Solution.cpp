//307365859                         23 Feb,2025, 11:42 AM                  Krishno_MD                        109 ms                             0 KB

// As it is told that there are multiple solution we can use a trick.
// For become the divisor c needs to become less than or equal to b. If we can store minimum element in the b and the rest of the element in c, there is no chance to become divisor

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define p1(i,n) for(int i=1; i<n; i++)
#define vec vector<int>
#define pb push_back

class K{
    public:
        void solution(){
            int n; cin >> n; vec d;
            f(n) {int x; cin >> x; d.pb(x);}
            
            vec b, c;
            bool v = true;
            p1(i, n) {if(d[i] != d[i-1]) {v = false; break;}} // Checking if all elements are equal or not because if all are equal then it is not possible
            
            if(v) {cout << "-1\n";} 
            else {
                sort(d.begin(), d.end());
                int m = d[0]; // The minimum element
                f(n) {
                    if(d[i] == m) {b.pb(m);} // Storing minimum element to b such that c cannot be divisor of b.
                    else {c.pb(d[i]);}
                }
                cout << b.size() << " " << c.size() << "\n";
                p(i, b.size()) cout << b[i] << " ";
                cout << "\n";
                p(i, c.size()) cout << c[i] << " ";
                cout << "\n";
            }
        }
};

int main(){
    int t; cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
