#include<stdio.h>
//Krishno_MD_KUET_CSE
int main(){
    int n;
    scanf("%d",&n);
    int c[8]={0};
    for(int i=0; i<n; i++){
        int a;
        scanf("%d",&a);
        c[a] += 1;
    }
    if(c[5]==0 && c[7]==0 && c[2]>=c[4] && c[1]==c[2]+c[3] && c[2]+c[3]==c[4]+c[6]){
        for(int i=0; i<c[4]; i++){
            printf("1 2 4\n");
        }
        c[2] -= c[4];
        for(int i=0; i<c[2]; i++){
            printf("1 2 6\n");
        }
        for(int i=0; i<c[3]; i++){
            printf("1 3 6\n");
        }
    }else{
        printf("-1\n");
    }
    return 0;
}
