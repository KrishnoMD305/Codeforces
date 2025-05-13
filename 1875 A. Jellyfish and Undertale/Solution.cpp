// 319489775	        May/13/2025 15:40UTC+6	        Krishno_MD	        1875A - Jellyfish and Undertale	        C++20 (GCC 13-64)	        Accepted	        358 ms	        100 KB

#include<bits/stdc++.h>
using namespace std;
// Krishno_Mondol_KUET_CSE
#define ll long long
void solve(){
    ll a,b,n; cin>>a>>b>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
    ll s=(b==1?0:(b-1));
    for(int i=0; i<n; i++){
        if(v[i]+1<=a){s += v[i];}
        else{s += (a-1);}
    }
    cout<<s+1<<endl;
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
