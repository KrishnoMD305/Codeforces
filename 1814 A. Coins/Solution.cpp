// 308783621                   03 March,2025, 06:15 PM                   Krishno_MD                             108 ms                   100 KB

/* (n-2x)%k==0  => (n-2x) mod k = 0  =>n-2x = 0 (mod k)  => n = 2x (mod k)    => n mod K = 2x 
1. If n mod k == 0 then 2x = 0  => x = 0. So for the condition n%k==0 there is a solution. 
2. A theory: if ax = b mod m then, gcd(a,m) divides b
              if 2x = n mod k then gcd(2,k) divides n
if k is odd then gcd(2,k) = 1 (Always) and n/1 is always true for all values of n. So for k is odd there is solution.
if k is even then gcd(2,k) = 2 (always) and n/2 is true if n is even. So, for n is even there is solution if k is odd.   */


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
            long long n,k; cin>>n>>k;
            if(n%k==0 || k%2==1 || n%2==0){cout<<"Yes\n";}
            else{cout<<"No\n";}
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        K solve; 
        solve.solution(); 
    }
    return 0;
}
