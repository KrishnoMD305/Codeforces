#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define vec vector<int>
#define pb push_back
#define ll long long

class K{
    public:
        void solution(){
            int a, b, c, d; cin >> a >> b >> c >> d;
            if (b > d) {cout << "-1\n"; return;}
            int s = d - b; a += s;
            if (a < c) {cout << "-1\n";} 
            else {s += (a - c); cout << s << "\n";}
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
