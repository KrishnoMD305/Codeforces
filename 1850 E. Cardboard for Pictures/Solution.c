// 316101463	        Apr/18/2025 19:51UTC+6	          Krishno_MD	        1850E - Cardboard for Pictures	        GNU C11	        Accepted	        92 ms	        1600 KB

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define ll long long

// Krishno_MD_KUET_CSE

void solution(){
    ll n,c; scanf("%lld %lld",&n,&c);
    ll v[n];
    for(ll i=0; i<n; i++){scanf("%lld",&v[i]);}
    ll ans=-1,w_min=1,w_max=1e9;
    while(w_min<=w_max){
        ll mid=w_min+(w_max-w_min)/2,tot=0;
        for(ll i=0; i<n; i++){
            tot += (v[i]+2*mid)*(v[i]+2*mid);
            if(tot>c){break;}
        }
        if(tot==c){ans=mid; break;}
        if(tot>c){w_max=mid-1;}
        else{w_min=mid+1;}
    }
    printf("%lld\n",ans);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
