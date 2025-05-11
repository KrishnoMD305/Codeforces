// 319309311	        May/12/2025 03:31UTC+6	        Krishno_MD	        1878C - Vasilije in Cacak	        C++20 (GCC 13-64)	        Accepted	        108 ms	        0 KB
#include<bits/stdc++.h>
using namespace std;
//Krishno_Mondol_KUET_CSE  
void solve(){
    long long n,k,x; cin>>n>>k>>x;
    long long min_sum = k*(k+1)/2;
    long long max_sum = k*(2*n-k+1)/2;
    if(x>=min_sum && x<=max_sum){cout<<"YES\n";}
    else{cout<<"NO\n";}
}  
int main(){ int t; cin>>t; while(t--){ solve(); } return 0;}


/* Since it is 1 to n it is always possible to find a sum that can be equal to x if the bound is exist
The bound is the max_sum and the min_sum for the k numbers of element. */
