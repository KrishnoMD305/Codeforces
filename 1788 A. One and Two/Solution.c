// 310289250                   12 Mar,2025, 10:53 PM                        Krishno_MD                               62 ms                           100 KB

#include<stdio.h>
// Krishno_MD_KUET_CSE

void solution(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int total = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==2){
            total += 2;
        }
    }
    int ind = -1;
    int h =0;
    for(int i=0; i<n; i++){
        if(arr[i]==2){
            h += 2;
        }
        if(h == total - h){
            ind = i+1;
            break;
        }
    }
    if(ind == -1){
        printf("-1\n");
    }else{
        printf("%d\n",ind);
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
