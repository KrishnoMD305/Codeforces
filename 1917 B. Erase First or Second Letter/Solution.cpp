// 315080350	    Apr/12/2025 10:50UTC+6	    Krishno_MD	      1917B - Erase First or Second Letter	      C++20 (GCC 13-64)	    Accepted	    77 ms	    100 KB

#include<bits/stdc++.h>
using namespace std; 
#define ll long long

// Krishno_MD_KUET_CSE

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    set<char> ch;
    int u = 0;
    for(int i=0; i<s.size();i++){
        ch.insert(s[i]);
        u += ch.size();
    }
    cout<<u<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
