// 319574899	        May/14/2025 05:14UTC+6	        Krishno_MD	        1869A - Make It Zero	        GNU C11	        Accepted	        62 ms	        100 KB

#include<stdio.h>
// Krishno_Mondol_KUET_CSE
void solve(){
    int n,z_count=0; scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        int x; scanf("%d",&x);
        if(x==0){z_count++;}v[i] = x;
    }
    if(z_count==n){printf("0\n");
    }
    else{
        if(n%2==0){
            printf("2\n");
            printf("1 %d\n",n);
            printf("1 %d\n",n);
        }else{
            printf("4\n");
            printf("1 %d\n",n);
            printf("2 %d\n",n);
            printf("1 2\n");
            printf("1 2\n");
        }
    }
}
int main(){int t; scanf("%d",&t);while(t--){solve();}return 0;}


/* If there are even number of elements :
   a b c d       a^b^c^d = x     x x x x     x^x^x^x      0 0 0 0
   SO 2 operation from 1 to n
   If there are odd number of elements:
   a b c d e           a^b^c^d^e = x         x x x x x     x^x^x^x      x 0 0 0 0    x^0    x x 0 0 0    x^x     0 0 0 0 0
   SO 4 op:  1 to n, 2 to n, 1 to 2, 1 to 2  */
