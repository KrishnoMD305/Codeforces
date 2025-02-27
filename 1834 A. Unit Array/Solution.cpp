// 308038350                            27 Feb,2025, 01:41 PM                   Krishno_MD                          46 ms                      0 KB

// It depends on the number of -1 . 
// If it is odd then there will be at least one -1 that can not be neutralized. That's why use count+1
// Otherwise count because all -1 will be neutralized


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
