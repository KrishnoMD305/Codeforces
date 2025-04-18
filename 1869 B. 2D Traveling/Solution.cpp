// 316040285	        Apr/18/2025 10:48UTC+6	        Krishno_MD	        1869B - 2D Traveling	        C++20 (GCC 13-64)	        Accepted	        717 ms	        100 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){ 
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<ll> x(n+1),y(n+1);
    for(ll i=1; i<=n; i++){cin>>x[i]>>y[i];}
    ll direct_price = llabs(x[a]-x[b])+llabs(y[a]-y[b]);
    ll min_a = LLONG_MAX/2, min_b = LLONG_MAX/2;
    for(ll i=1; i<=k; i++){
        min_a = min(min_a,llabs(x[a]-x[i])+llabs(y[a]-y[i]));
        min_b = min(min_b,llabs(x[b]-x[i])+llabs(y[b]-y[i]));
    }
    cout<<min(direct_price,min_a+min_b)<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
