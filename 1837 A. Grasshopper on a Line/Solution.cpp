// 308033268                  27 Feb,2025, 12:53 PM                    Krishno_MD                          46 ms                     0 KB

// If x is not divisable by k, then alone x will be answer. So it can be only one jump
// If it is divisable then x-1 and 1 meaning 2 jumps. As k is greater than 2 so, 1 is not divisable by any value of k
// Also if x is divisable by k then of course x-1 is not divisable by k

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
            int x, k; cin >> x >> k;
            if(x % k != 0){cout << "1\n" << x << "\n";}
            else{cout << "2\n" << "1 " << x-1 << "\n";}
        }
};

int main(){
    int t; 
    cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
