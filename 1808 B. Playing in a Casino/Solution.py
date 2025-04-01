#Krishno_MD_KUET_CSE
t = int(input())
for i in range(t):
    n,m = map(int,input().split())
    v = [list(map(int,input().split())) for i in range(n)]
    tot = 0
    for i in range(m):
        col = [0]*n
        for j in range(n):
            col[j] = v[j][i]
        col.sort()
        pre = 0
        for k in range(n):
            tot += k*col[k] - pre
            pre += col[k]
    print(tot)
