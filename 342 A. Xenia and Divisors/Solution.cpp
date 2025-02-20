#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int m;
    cin>>m;
    int c[8]={0};
    for(int i=0; i<m; i++){
        int a; cin>>a;
        c[a] += 1;
    }
    if(c[5]==0 && c[7]==0 && c[2]>=c[4] && c[1]==c[2]+c[3] && c[2]+c[3]==c[4]+c[6]){
        for(int i=0; i<c[4]; i++){cout<<"1 2 4\n";}
        c[2] -= c[4];
        for(int i=0; i<c[2]; i++){cout<<"1 2 6\n";}
        for(int i=0; i<c[3]; i++){cout<<"1 3 6\n";}
    }else{cout<<"-1\n";}
}
int main(){solve(); return 0;}
