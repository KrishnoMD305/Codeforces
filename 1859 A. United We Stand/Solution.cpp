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
            p1(i, n) {if(d[i] != d[i-1]) {v = false; break;}}
            
            if(v) {cout << "-1\n";} 
            else {
                sort(d.begin(), d.end());
                int m = d[0];
                f(n) {
                    if(d[i] == m) {b.pb(m);} 
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
