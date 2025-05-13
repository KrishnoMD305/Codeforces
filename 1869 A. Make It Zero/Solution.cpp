#include<bits/stdc++.h>
using namespace std;
//Krishno_Mondol_KUET_CSE  
void solve(){
    int n,Z_count = 0; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==0){Z_count++;} v[i] = x;
    }
    if(Z_count==n){cout<<"0\n";}
    else{
        if(n%2==0){
            cout<<"2"<<endl;
            cout<<"1 "<<n<<endl;
            cout<<"1 "<<n<<endl;
        }else{
            cout<<"4"<<endl;
            cout<<"1 "<<n<<endl;
            cout<<"2 "<<n<<endl;
            cout<<"1 2"<<endl;
            cout<<"1 2"<<endl;
        }
    }
}
int main(){ int t; cin>>t; while(t--){ solve(); } return 0;}
