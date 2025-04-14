// 315532571	        Apr/14/2025 11:07UTC+6	        Krishno_MD	        1899B - 250 Thousand Tons of TNT	        C++20 (GCC 13-64)	        Accepted	        265 ms	        0 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
    vector<int> div;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            div.push_back(i);
            if(i != n/i){
                div.push_back(n/i);
            }
        }
    }
    ll a=0;
    for(int num : div){
        ll maxi = 0, mini = LLONG_MAX;
        int cnt =0; long long su=0;
        for(int i=0; i<n; i++){
            su += v[i]; cnt++;
            if(cnt==num){
                maxi = max(maxi,su);
                mini = min(mini,su);
                cnt=0; su=0;
            }
        }
        a = max(a,maxi-mini);
    }
    cout<<a<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
