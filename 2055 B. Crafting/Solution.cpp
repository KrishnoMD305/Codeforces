#include<bits/stdc++.h>
using namespace std;
// Krishno_MD_KUET_CSE
void solution(){
    int n; cin>>n;
    vector<int> a(n),b(n);
    bool v = false;
    int x = -1,g = 0,m = INT_MAX;
    for(int i=0; i<n; i++){cin>>a[i];}
    for(int i=0; i<n; i++){cin>>b[i];}
    for(int i=0; i<n; i++){
        if(b[i]>a[i]){
            if(x != -1){v = true;}
            x = i;
            g = b[i] - a[i];
        }else{m = min(m,a[i]-b[i]); }
    }
    if(v){cout<<"NO\n";}
    else{cout<< ((g <= m) ? "YES" : "NO") <<endl;}
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
