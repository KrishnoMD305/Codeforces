// 309755251             10 Mar,2025, 07:11 PM                    Krishno_MD                           77 ms                  4000 KB

//The properties of XOR : 
//                        1. A XOR A = 0
//                        2. A XOR 0 = A
/* bi = ai XOR x
 => b1 XOR b2 XOR b3 XOR..... = 0
 => (a1 XOR x) XOR (a2 XOR x) XOR ... = 0
 => (a1 XOR a2 XOR a3 XOR.....) XOR (x XOR x XOR....) = 0
   If n = odd  x XOR x... = x, so x = a1 XOR a2 XOR ....
   If n = even then x XOR x... = 0. For that if a1 XOR a2 XOR.. = 0 then there exist a valid answer of x
   and x could be any number otherwise there is no valid answer. */ 


#include<bits/stdc++.h>
using namespace std;

// Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define vec vector<int>
#define pb push_back
#define ll long long

class K{
    public:
        void solution(){
            int n; cin >> n;
            int r = 0;
            f(n){int x; cin >> x; r ^= x;}
            if(n % 2 != 0){cout << r << endl;} 
            else {
                if(r != 0){cout << "-1\n";} 
                else {cout << "0\n";}
            }
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
