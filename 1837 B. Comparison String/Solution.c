// 319949353	        May/17/2025 03:50UTC+6	        Krishno_MD	        1837B - Comparison String	        GNU C11	        Accepted	        62 ms	        100 KB

#include<stdio.h>
// Krishno_Mondol_KUET_CSE
#define ll long long
int max(int a, int b){return a>b ? a:b;}
void solve(){
    int n; scanf("%d",&n);
    char str[101]; scanf("%s",&str);
    int maxx = 1, b_count = 1;
    for(int i=1; i<strlen(str); i++){
        if(str[i]==str[i-1]){ b_count++; maxx = max(maxx,b_count);}
        else{maxx = max(maxx,b_count); b_count = 1;}
    }
    printf("%d\n",maxx+1);
}
int main(){int t; scanf("%d",&t);while(t--){solve();}return 0;}
