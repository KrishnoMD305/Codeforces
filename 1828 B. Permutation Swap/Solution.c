// 319951832	        May/17/2025 05:02UTC+6	        Krishno_MD	        1828B - Permutation Swap	        GNU C11	        Accepted	        109 ms	        100 KB

#include<stdio.h>
// Krishno_Mondol_KUET_CSE
#define ll long long
int gcd(int a, int b){return b==0 ? a : gcd(b, a%b);}
void solve(){
    int n,anss = 0; scanf("%d",&n);
    for(int i=1; i<=n; i++){int x; scanf("%d",&x); anss = gcd(anss,abs(x-i));}
    printf("%d\n",anss);
}
int main(){int t; scanf("%d",&t);while(t--){solve();}return 0;}
