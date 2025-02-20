// For the given operation if there is at least three dot sequentially then only 1st operation can be done 2 times
// And rest of the time the 2nd operation will be done as the middle one will fill automatically of three dots
// Or else the operation's number will be the number of dots

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
void solve(){
    int n; cin>>n;
    string str; cin>>str;
    int c=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='.'){c++;}
    }
    size_t i=str.find("..."); 
    if(i != string::npos){cout<<"2\n";}
    else{cout<<c<<"\n";}
    
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
