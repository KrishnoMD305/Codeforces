#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
#define p1(i,n) for(int i=1; i<n; i++)
#define vec vector<int>
#define pb push_back
#define ll long long

class K{
    public:
        void solution(){
            int n, m=0, p=0, count=0;
            cin >> n;
            f(n){
                int a; cin >> a;
                if(a==1){p++;}
                else{m++;}
            }
            while(m > p){m--; p++; count++;}
            if(m%2 == 0){cout << count << "\n";}
            else{cout << count+1 << "\n";}
        }
};

int main(){
    int t; 
    cin >> t; 
    K solve; 
    while(t--) { solve.solution(); } 
    return 0;
}
