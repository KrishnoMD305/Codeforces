#include<bits/stdc++.h>
using namespace std;

// Krishno_MD_KUET_CSE

void solution(){
    int n,k; cin>>n>>k;
    vector<int> alphabet(27,0);
    for(int i=0; i<n; i++){
        char c; cin>>c;
        alphabet[c-'a'] ++;
    }
    int odd_o = 0;
    for(int i=0; i<alphabet.size(); i++){
        if(alphabet[i]%2 != 0){odd_o++;}
    }
    if(odd_o>k+1){cout<<"NO\n";}
    else{cout<<"YES\n";}
}

int main(){int t; cin>>t; while(t--){solution();} return 0;}
