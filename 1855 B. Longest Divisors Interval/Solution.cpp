//319701467	        May/15/2025 05:24UTC+6	        Krishno_MD	        1855B - Longest Divisors Interval	        C++20 (GCC 13-64)	        Accepted	        93 ms	        100 KB

#include<bits/stdc++.h>
using namespace std;
//Krishno_Mondol_KUET_CSE 
#define ll long long 
void solve(){
    ll n,max_el; cin>>n;
    for(max_el=1; n%max_el==0; max_el++){}
    cout<<max_el-1<<endl;
}
int main(){ int t; cin>>t; while(t--){ solve(); } return 0;}
