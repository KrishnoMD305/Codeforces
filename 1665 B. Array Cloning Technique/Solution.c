// 324047402
#include<stdio.h>
//Krishno_Mondol_KUET_CSE 
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void solve(){ 
    int n; scanf("%d",&n);
    int v[n]; 
    for(int i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    qsort(v, n, sizeof(int), compare);
    int y=v[0],m=1,x=1;
    for(int i=1; i<n; i++){
        if(y==v[i]){
            m += 1;
            x = (m>x)? m:x;
        }else{
            y = v[i]; m = 1;
        }
    }
    n -= x;
    int cnt = 0;
    while(n>0){
        if(x>=n){
            cnt += (1+n);
            break;
        }
        cnt += (1+x);
        n -= x;
        x *= 2;
    }
    printf("%d\n",cnt);
}
int main(){int t; scanf("%d",&t); while(t--){solve();} return 0;}
