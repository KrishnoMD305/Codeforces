// 321394683
#include<bits/stdc++.h> 
using namespace std;
// Krishno_Mondol_KUET_CSE
#define ll long long
void solve(){
    string str; cin>>str;
    int count_1=0, count_0=0;
    for(char ch : str){
        if(ch=='1'){count_1++;}
        else{count_0++;}
    }
    if(count_0==count_1){cout<<"0\n"; return;}
    for(char c : str){
        //if(count_0==0 || count_1==0){break;}
        if(c=='1'){
            if(count_0>0){count_0--;}
            else{break;}
        }
        else{
            if(count_1>0){count_1--;}
            else{break;}
        }
    }
    cout<<count_0+count_1<<endl;
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
