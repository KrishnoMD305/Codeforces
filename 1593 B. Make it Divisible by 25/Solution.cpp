// 325061256
#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n; cin>>n;
    string s = to_string(n);
    vector<string> div = {"00","25","50","75"};
    int ans = s.size();
    for(string str : div){
        int i = s.size()-1;
        while(i>=0 && s[i]!=str[1]){
            i--;
        }
        if(i<0){continue;}
        i--;
        while(i>=0 && s[i]!=str[0]){
            i--;
        }
        if(i<0){continue;}

        int rem = (s.size()-1) - i - 1;
        ans = min(ans,rem);
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
