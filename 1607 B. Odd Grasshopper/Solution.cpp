// 324980225
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll x,n; cin>>x>>n;
    ll rr = n%4,eff;
    if(rr==0){eff=0;}
    else if(rr==1){eff=n;}
    else if(rr==2){eff=-1;}
    else{eff=-(n+1);}

    if(x%2==0){x -= eff;}
    else{x += eff;}

    cout<<x<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){ solve(); }
    return 0;
}
