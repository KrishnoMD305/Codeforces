// 324981231
#include<stdio.h>
#define ll long long
void solve(){
    ll x,n; scanf("%lld %lld",&x,&n);
    ll rr = n%4,eff;
    if(rr==0){eff=0;}
    else if(rr==1){eff=n;}
    else if(rr==2){eff=-1;}
    else{eff=-(n+1);}

    if(x%2==0){x -= eff;}
    else{x += eff;}

    printf("%lld\n",x);
}
int main(){
    int t; scanf("%d",&t);
    while(t--){ solve(); }
    return 0;
}
