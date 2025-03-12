#include<bits/stdc++.h>
using namespace std; 

// Krishno_MD_KUET_CSE
void solve(){
    int n;
    cin>>n;
    long long total = 0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==2){total += 2;}
    }
    int ind = -1; int h = 0;
    for(int i=0; i<n; i++){   
        if(v[i]==2){h += 2;}
        if(h == total - h){
            ind = i+1;
            break;
        }
    }
    if(ind == -1){
        cout<<"-1\n";
    }else{
        cout<<ind<<endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
