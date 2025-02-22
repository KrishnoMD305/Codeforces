// 307235749                  22 Feb,2025,01:05 PM              Krishno_MD                        61 ms                 0 KB

// Observe the grid and find that for which values of i,j , how much point does it get

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
#define f(n) for(int i=0; i<n; i++)
#define p(i,n) for(int i=0; i<n; i++)
void h(int i, int j, int *r){
    if(((i==4 || i==5) && (j>3 && j<6)) || ((j==4 || j==5) && (i>3 && i<6))){*r += 5;}
    else if(((i==3 || i==6) && (j>2 && j<7)) || ((j==3 || j==6) && (i>2 && i<7))){*r += 4;}
    else if(((i==2 || i==7) && (j>1 && j<8)) || ((j==2 || j==7) && (i>1 && i<8))){*r += 3;}
    else if(((i==1 || i==8) && (j>0 && j<9)) || ((j==1 || j==8) && (i>0 && i<9))){*r += 2;}
    else if(((i==0 || i==9) && (j>=0 && j<=9)) || ((j==0 || j==9) && (i>=0 && i<=9))){*r += 1;}
}
void solve(){
    char s[10][10];
    p(i,10){p(j,10){cin>>s[i][j];}}
    int c=0;
    p(i,10){p(j,10){if(s[i][j]=='X'){h(i,j,&c);}}}
    cout<<c<<"\n";
}
int main(){int t; cin>>t; while(t--){solve();} return 0;}
