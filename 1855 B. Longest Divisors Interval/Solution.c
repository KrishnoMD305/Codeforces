// 319701554	        May/15/2025 05:29UTC+6	        Krishno_MD	        1855B - Longest Divisors Interval	        GNU C11	        Accepted	        93 ms	        100 KB

#include<stdio.h>
// Krishno_Mondol_KUET_CSE
#define ll long long
void solve(){
    ll n,max_el; scanf("%lld",&n);
    for(max_el=1; n%max_el==0; max_el++){}
    printf("%lld\n",max_el-1);
}
int main(){int t; scanf("%d",&t);while(t--){solve();}return 0;}
