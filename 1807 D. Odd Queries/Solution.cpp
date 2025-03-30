#include<bits/stdc++.h>
using namespace std; 

// Krishno_MD_KUET_CSE

void solve(){
    int n,q; cin>>n>>q;
    vector<int> v(n+1);
    vector<int> pr(n+1,0);
    for(int i=1; i<n+1; i++){
        cin>>v[i];
        pr[i] = pr[i-1] + v[i];

    }
    for(int i=0; i<q; i++){
        int l,r,k;
        cin>>l>>r>>k;
        int total = pr[n];
        int ran_t = pr[r] - pr[l-1];
        int mod = total - ran_t + (r-l+1)*k;
        if(mod%2 == 0){cout<<"NO\n";}
        else{cout<<"YES\n";}
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
