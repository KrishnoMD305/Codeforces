#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int a[128]={0}, b[128]={0};
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0; i<s1.size(); i++){
        int f=s1[i]; a[f] += 1;
    }
    for(int i=0; i<s2.size(); i++){
        int f=s2[i]; b[f] += 1;
    }
    for(int i=0; i<128; i++){
        if(i != 32){
            if(!(b[i] <= a[i])){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}
int main(){solve(); return 0;}
