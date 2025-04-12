// 315154650	        Apr/12/2025 19:57UTC+6	        Krishno_MD	        1914C - Quests	      C++20 (GCC 13-64)	        Accepted	        436 ms	        0 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){
    int n,k; cin>>n>>k;
    vector<int>v1(n),v2(n),a(n+1);
    for(int i=0; i<n; i++){cin>>v1[i];}
    for(int i=0; i<n; i++){cin>>v2[i];}
    a[0]=v2[0];
    for(int i=1; i<n; i++){
        a[i] = max(a[i-1],v2[i]);
    }
    int ans=0, mot=0;
    for(int i=0; i<min(n,k); i++){
        mot += v1[i];
        int l = k-(i+1);
        int f = mot+l*a[i];
        ans = max(ans,f);
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
