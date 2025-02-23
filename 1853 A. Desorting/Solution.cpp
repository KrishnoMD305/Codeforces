#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define p1(i,n) for(int i=1; i<n; i++)
#define vec vector<int>
#define pb push_back
#define ll long long

class K{
    public:
        void solution(){
            int n; cin >> n; vec a;
            bool val = false;
            
            f(n) {
                int x; cin >> x;
                if(i > 0 && x < a.back()) {val = true;} a.pb(x);
            }
            
            if(val){cout << "0\n"; return;}
            
            int min = INT_MAX, i, j;
            p1(k, n) {
                int s = a[k] - a[k - 1];
                if(s < min) {min = s; i = k; j = k - 1;}
            }
            
            int c = (min / 2) + 1;
            cout << c << "\n";
        }
};

int main(){
    int t; 
    cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
