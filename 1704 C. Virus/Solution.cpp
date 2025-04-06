// 314198738	      Apr/06/2025 11:37UTC+6	      Krishno_MD	      1704C - Virus	      C++20 (GCC 13-64)	      Accepted	      203 ms	      100 KB

#include<bits/stdc++.h>
using namespace std;

//Krishno_MD_KUET_CSE

void solution(){
	int n,m;
    cin>>n>>m;
    vector<int> infected(m);
    for(int i=0; i<m; ++i){cin>>infected[i];}
    sort(infected.begin(),infected.end());
    vector<int> gaps;
    for(int i=0; i<m; i++){
        if(i==m-1){
            gaps.push_back(n-infected[i]+infected[0]-1);
        }else{
            int c = infected[i];
            int next = infected[i+1];
            gaps.push_back(next-c-1);
        }
        
    }
    sort(gaps.rbegin(),gaps.rend());
    
    int protected_count = 0;
    for(int i=0; i<gaps.size(); i++){
        gaps[i] -= i*4;
        if(gaps[i]==1){
            protected_count++;
        }else if(gaps[i]>1){
            protected_count += (gaps[i]-1);
        }else{
            break;
        }
    }
    cout<<n - protected_count<<endl;
}

int main(){
	int t; cin>>t;
	for(int i=0; i<t; i++){solution();}
	return 0;
}
