// 308387721                         28 Feb,2025, 11:27 PM                         Krishno_MD                             61 ms                              0 KB

// If it is played optimally this number repeat 2,1,0, 2,1,0, ...... 
// After 3 match it is repeated. So we need the array {2,1,0}
// As it is zero based index so the formula is (k-1)%3 . So, we find the index.
// We compare it to the initial. For that we have to assume the initial=2

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
            int k; cin >> k; int i = 2;
            int spec[3] = {2, 1, 0};
            
            int tem = (k-1) % 3;
            
            int p = spec[tem];
            if(p == i) {cout << "Yes\n";} 
            else {cout << "No\n";}
        }
};

int main() {
    int t; 
    cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
