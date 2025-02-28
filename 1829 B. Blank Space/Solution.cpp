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
            vec v; int count = 0, max = 0;
            bool valid = false;
            f(n) {
                int a; cin >> a;
                if(a == 0) {valid = true;}
                else {valid = false; count = 0;}
                
                if(valid && a == 0) {count++;}
                
                if(count > max) {max = count;}
            }
            cout << max << "\n";
        }
};

int main() {
    int t; 
    cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
