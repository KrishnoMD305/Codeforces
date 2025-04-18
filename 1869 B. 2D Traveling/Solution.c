// 316040201	        Apr/18/2025 10:47UTC+6	        Krishno_MD	        1869B - 2D Traveling	        GNU C11	        Accepted	        156 ms	        3200 KB

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define ll long long

// Krishno_MD_KUET_CSE

void solution(){
    ll n,k,a,b; scanf("%lld %lld %lld %lld",&n,&k,&a,&b);
    ll x[n+1],y[n+1];
    for(ll i=1; i<=n; i++){scanf("%lld %lld",&x[i],&y[i]);}
    ll direct_price = llabs(x[a]-x[b])+llabs(y[a]-y[b]);
    ll min_a = LLONG_MAX/2, min_b = LLONG_MAX/2;
    for(ll i=1; i<=k; i++){
        min_a = (llabs(x[a]-x[i])+llabs(y[a]-y[i]))<min_a ? (llabs(x[a]-x[i])+llabs(y[a]-y[i])):min_a;
        min_b = (llabs(x[b]-x[i])+llabs(y[b]-y[i]))<min_b ? (llabs(x[b]-x[i])+llabs(y[b]-y[i])):min_b;
    }
    printf("%lld\n",direct_price<min_a+min_b?direct_price:min_a+min_b);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
