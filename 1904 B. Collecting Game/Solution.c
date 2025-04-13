// 315237269	        Apr/13/2025 11:17UTC+6	        Krishno_MD	        1904B - Collecting Game	        GNU C11	        Accepted	        468 ms	        2400 KB

#include<stdio.h>
#include<string.h>

// Krishn0_MD_KUET_CSE

typedef struct{
    int value;
    int index;
}Pair;

int cmpre(const void *a, const void *b){
    Pair *p1 = (Pair*)a;
    Pair *p2 = (Pair*)b;
    return p1->value - p2->value;
}

void solution(){
    int n; scanf("%d",&n);
    Pair *v=(Pair*)malloc(n*sizeof(Pair));
    long long *prefix_s = (long long*)malloc(n*sizeof(long long));
    int *a = (int*)malloc(n*sizeof(int));
    int *stack = (int*)malloc(n*sizeof(int));
    int tup = -1;

    for(int i=0; i<n; i++){
        scanf("%d", &v[i].value);
        v[i].index = i;
        a[i] = -1;
    }
    qsort(v,n,sizeof(Pair),cmpre);
    prefix_s[0] = v[0].value;
    for(int i=1; i<n; i++){
        prefix_s[i] = prefix_s[i-1]+v[i].value;
    }
    for(int i=0; i<n; i++){
        stack[++tup] = v[i].index;
        if(i==n-1 || v[i+1].value>prefix_s[i]){
            while(tup>=0){
                a[stack[tup--]] = i;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    free(v);
    free(prefix_s);
    free(a);
    free(stack);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
