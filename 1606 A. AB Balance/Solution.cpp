// 325046403
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    int n = s.size();
    if(n==1){ cout<<s<<endl; }
    else{
        if(s[0]==s[n-1]){ cout<<s<<endl; }
        else{
            if(s[0]=='a'){s[0]='b';}
            else{s[0]='a';}
            cout<<s<<endl;
        }
    }
}

int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        solve();
    }
    return 0;
}
