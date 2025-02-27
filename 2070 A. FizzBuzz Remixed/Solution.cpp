// 308101866                       27 Feb,2025, 08:45 PM                Krishno_MD                           62 ms                         0 KB

// It is showing that for every 15 cycle there appears o,1 and 2 .. this 3 remainders repeat each time
// So it will efficiently calculate

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
            ll n;
            cin >> n;
            ll complete_sets = n / 15;
            ll count = 3 * complete_sets;
            ll last_num = complete_sets * 15;
            
            p(i, n - last_num + 1) { 
                ll current = last_num + i;
                if(current % 3 == current % 5) {count++;}
            }
            cout << count << "\n";
        }
};

int main() {
    int t; 
    cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
