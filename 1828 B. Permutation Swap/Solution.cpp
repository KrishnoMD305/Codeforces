// 319951723	        May/17/2025 04:58UTC+6	        Krishno_MD	        1828B - Permutation Swap	        C++20 (GCC 13-64)	        Accepted	        249 ms	        100 KB

#include<bits/stdc++.h>
using namespace std;
//Krishno_Mondol_KUET_CSE 
#define ll long long 
int gcd(int a, int b){return b==0 ? a : gcd(b, a%b);}
void solve(){
    int n,anss = 0; cin>>n;
    for(int i=1; i<=n; i++){int x; cin>>x; anss = gcd(anss,abs(x-i));}
    cout<<anss<<endl;
}
int main(){ int t; cin>>t; while(t--){ solve(); } return 0;}
