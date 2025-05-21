// 319949236	        May/17/2025 03:47UTC+6	        Krishno_MD	        1837B - Comparison String	        C++20 (GCC 13-64)	        Accepted	        46 ms	        0 KB

#include<bits/stdc++.h>
using namespace std;
//Krishno_Mondol_KUET_CSE 
#define ll long long 
void solve(){
    int n; cin>>n;
    string str; cin>>str;
    int maxx = 1, s_count = 1;
    for(int i=1; i<str.size(); i++){
        if(str[i]==str[i-1]){s_count++; maxx = max(maxx,s_count);}
        else{maxx = max(maxx,s_count); s_count = 1;}
    }
    cout<<maxx+1<<endl;
}
int main(){ int t; cin>>t; while(t--){ solve(); } return 0;}
