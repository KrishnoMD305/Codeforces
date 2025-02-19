#include<stdio.h>
//Krishno_MD_KUET_CSE
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){scanf("%d",&arr[i]);}
    int p=-1;
    int a=arr[k-1];
    for(int i=0; i<n; i++){
        if(arr[i] != a){p=i;}
    }
    if(p==-1){printf("0\n");}
    else if(k-1 < p){printf("-1\n");}
    else{printf("%d\n",p+1);}
    free(arr);
    return 0;
}
