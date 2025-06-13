#include<bits/stdc++.h> 
using namespace std;
// Krishno_Mondol_KUET_CSE 
#define ll long long
void solve(){
    int n,k,e=0; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){ cin>>v[i]; if(v[i]%2==0){e++;} }
    int ans = INT_MAX;
    for(int i : v){ ans = min(ans,(k-(i%k))%k);}
    if(k==4){
        if(e>=2){ans = 0;}
        else if(e==1){ans = min(ans,1);}
        else{ans = min(ans,2);}
    }
    cout<<ans<<endl;
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
