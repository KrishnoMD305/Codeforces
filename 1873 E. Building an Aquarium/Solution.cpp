// 315916880	        Apr/17/2025 12:26UTC+6	        Krishno_MD	        1873E - Building an Aquarium	        C++20 (GCC 13-64)	        Accepted	        437 ms	        0 KB

#include<bits/stdc++.h>
using namespace std; 

// Krishno_MD_KUET_CSE

void solve(){
    long long n,x; cin>>n>>x;
    vector<long long> v(n);
    for(long long i=0; i<n; i++){cin>>v[i];}
    long long ans=-1;
    long long hs=1,he=1e10;
    while(hs<=he){
        long long w = 0;
        long long mid = hs+(he-hs)/2;
        for(long long i=0; i<n; i++){
            if(mid>v[i]){w += (mid-v[i]);}
        }
        if(w<=x){ans = mid; hs = mid+1;}
        else{he = mid-1;}
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
