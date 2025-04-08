// 314437569	      Apr/08/2025 08:55UTC+6	      Krishno_MD	      1909B - Make Almost Equal With Mod	      C++20 (GCC 13-64)	      Accepted	      186 ms	      100 KB

#include<bits/stdc++.h>
using namespace std;

//Krishno_MD_KUET_CSE

void solution(){
    long long n; cin>>n;
    vector<long long> v(n);
    for(long long i=0; i<n; i++){cin>>v[i];}
    long long r = 2;
    while(true){
        set<long long> m;
        for(long long i=0; i<v.size(); i++){
            m.insert(v[i]%r);
        }
        if(m.size()==2){break;}
        r *= 2;
    }
    cout<<r<<endl;
}

int main(){
	int t; cin>>t;
	for(int i=0; i<t; i++){solution();}
	return 0;
}
