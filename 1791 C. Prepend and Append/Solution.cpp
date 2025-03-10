// 309760152                      10 Mar,2025, 07:48 PM                                            Krishno_MD                                       46 ms                             0 KB


/* As the final string can be made either adding 0 to start and 1 to end or 1 to start and 0 to end.
So, we can check by two pointer technique whether the last and first are equal or not. */


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
            string s; cin >> s;
            int start = 0, end = n - 1;
            while(start <= end){
                if(s[start] == s[end]){break;} 
                else {start++; end--;}
            }
            cout << end - start + 1 << endl;
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
