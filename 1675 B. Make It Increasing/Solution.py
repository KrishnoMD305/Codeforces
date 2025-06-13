# 321383514
# Krishno_Mondol_KUET_CSE
def solve(): 
    n = int(input())
    v = list(map(int,input().split()))
    cnt = 0
    vd2 = False
    for i in range(n-1,0,-1):
        if v[i]==0:
            vd2 = True
            break
        while v[i-1]>=v[i]:
            v[i-1] = v[i-1]//2
            cnt += 1
    if vd2:
        print("-1")
    else:
        print(cnt)
    


t = int(input())
for i in range(t):
    solve()
