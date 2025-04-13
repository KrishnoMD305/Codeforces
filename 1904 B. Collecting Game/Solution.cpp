// 315237121	        Apr/13/2025 11:15UTC+6	        Krishno_MD	        1904B - Collecting Game	        C++20 (GCC 13-64)	        Accepted	        218 ms	        0 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    vector<long long> prefix_s(n);
    prefix_s[0] = v[0].first;
    for(int i=1; i<n; i++){
        prefix_s[i] = prefix_s[i-1] + v[i].first;
    }
    vector<int> a(n,-1);
    stack<int> d;
    for(int i=0; i<n; i++){
        d.push(v[i].second);
        if(i==n-1 || v[i+1].first>prefix_s[i]){
            while(!d.empty()){
                a[d.top()] = i;
                d.pop();
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
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
