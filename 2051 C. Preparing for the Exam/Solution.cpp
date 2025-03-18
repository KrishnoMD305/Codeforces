#include<bits/stdc++.h>
using namespace std;

// Krishno_MD_KUET_CSE

void solution(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(m),b(k);
    for(int i=0; i<m; i++){cin>>a[i];}
    for(int i=0; i<k; i++){cin>>b[i];}
    vector<bool> valid(n+1,false);
    for(int i=0; i<k; i++){valid[b[i]] = true;}
    for(int i=0; i<m; i++){
        if(n==b.size() || (n-1==b.size() && !valid[a[i]])){cout<<"1";}
        else{cout<<"0";}
    }
    cout<<endl;
}

int main(){int t; cin>>t; while(t--){solution();} return 0;}
