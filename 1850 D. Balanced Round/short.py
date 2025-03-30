# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,k = map(int,input().split())
    v = sorted(list(map(int,input().split())))
    count,a = 1,1
    for i in range(1,n):
        count = 1 if v[i]-v[i-1] >k else count + 1
        a = max(a,count)
    print(n-a)
