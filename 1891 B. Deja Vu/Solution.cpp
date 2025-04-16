// 315790859	        Apr/16/2025 11:32UTC+6	        Krishno_MD	        1891B - Deja Vu	        C++20 (GCC 13-64)	        Accepted	        593 ms	        100 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){
    int n,q; cin>>n>>q;
    vector<ll> v1(n),v2(q);
    for(int i=0; i<n; i++){cin>>v1[i];}
    for(int i=0; i<q; i++){cin>>v2[i];}
    set<ll> v;
    for(int i=0; i<q; i++){
        if(v.count(v2[i])){continue;}
        v.insert(v2[i]);
        for(int j=0; j<n; j++){
            if(v1[j]%(1<<v2[i])==0){
                v1[j] += (1<<(v2[i]-1));
            }
        }
    }
    for(auto i : v1){cout<<i<<" ";}
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
