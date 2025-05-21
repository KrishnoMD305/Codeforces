// 320702107	        May/22/2025 04:54UTC+6	        Krishno_MD	        1794B - Not Dividing	        C++20 (GCC 13-64)	        Accepted	        124 ms	        100 KB

#include<bits/stdc++.h>
using namespace std;
//Krishno_Mondol_KUET_CSE 
#define ll long long 
void solve(){ 
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i]; if(v[i]==1){v[i] += 1;}}
    for(int i=1; i<n; i++){
        if(v[i]%v[i-1]==0){v[i]++;}
    }
    for(int i=0; i<n; i++){cout<<v[i]<<" ";}
    cout<<endl;
}
int main(){ int t; cin>>t; while(t--){ solve(); } return 0;}
