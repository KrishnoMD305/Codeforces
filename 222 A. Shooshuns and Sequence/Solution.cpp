#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int n,k; cin>>n>>k;
    deque<int> d;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        d.push_back(a);
    }
    int p=-1;
    int b=d[k-1];
    for(int i=0; i<n; i++){
        if(d[i] != b){p=i;}
    }
    if(p==-1){cout<<"0"<<endl;}
    else if(k-1 < p){cout<<"-1"<<endl;}
    else{cout<<p+1<<endl;}
}
int main(){solve(); return 0;}


/*It can be done manually by deque operation but it will give TLE  */
