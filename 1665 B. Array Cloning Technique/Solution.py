# 324045793
# Krishno_Mondol_KUET_CSE
def solve(): 
    n = int(input())
    v = list(map(int,input().split()))
    v.sort()
    y,m,x = v[0],1,1
    for i in range(1,len(v)):
        if y==v[i]:
            m += 1
            x = max(m,x)
        else:
            y = v[i]
            m = 1
    n -= x
    cnt = 0
    while n>0:
        if x>=n:
            cnt += (1+n)
            break
        cnt += (1+x)
        n -= x
        x *= 2
    print(cnt)
  
t = int(input())
for i in range(t):
    solve()
