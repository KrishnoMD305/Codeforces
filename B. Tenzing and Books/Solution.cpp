// 316466193	      Apr/21/2025 12:18UTC+6	      Krishno_MD	      1842B - Tenzing and Books	      C++20 (GCC 13-64)	      Accepted	      562 ms	      0 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Kishno_MD_KUET_CSE

void solve(){ 
    int n,x; cin>>n>>x;
    vector<int> v(n); int know=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){cin>>v[j];}
        for(int j=0; j<n; j++){
            if((x|v[j]) != x){break;}
            know = (know|v[j]);
        }
    }
    if(know==x){cout<<"Yes\n";}
    else{cout<<"No\n";}
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
