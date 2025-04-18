// 316101557	        Apr/18/2025 19:52UTC+6	        Krishno_MD	        1850E - Cardboard for Pictures	        C++20 (GCC 13-64)	        Accepted	        249 ms	        100 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){ 
    ll n,c; cin>>n>>c;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){cin>>v[i];}
    ll ans = -1,w_min=1, w_max=1e9;
    while(w_min<=w_max){
        ll mid = w_min + (w_max-w_min)/2;
        ll tot = 0;
        for(ll i=0; i<n; i++){
            tot += (v[i]+2*mid)*(v[i]+2*mid);
            if(tot>c){break;}
        }
        if(tot==c){ans = mid;break;}
        if(tot>c){w_max = mid-1;}
        else{w_min = mid+1;}
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
