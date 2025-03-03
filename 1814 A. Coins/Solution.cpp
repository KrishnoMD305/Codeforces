#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define vec vector<int>
#define pb push_back
#define ll long long
class K{
    public:
        void solution(){
            long long n,k; cin>>n>>k;
            if(n%k==0 || k%2==1 || n%2==0){cout<<"Yes\n";}
            else{cout<<"No\n";}
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        K solve; 
        solve.solution(); 
    }
    return 0;
}
