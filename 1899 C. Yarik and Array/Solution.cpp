// 315286898	        Apr/13/2025 18:26UTC+6	        Krishno_MD	        1899C - Yarik and Array	        C++20 (GCC 13-64)	        Accepted	        218 ms	        100 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
    int a=v[0],s=v[0];
    for(int i=1; i<n; i++){
        if(s<0){s=0;}
        if((v[i]%2!=0 && v[i-1]%2==0) || (v[i]%2==0 && v[i-1]%2!=0)){
            s += v[i];
        }else{s = v[i];}
        a = max(a,s);
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
