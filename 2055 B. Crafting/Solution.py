# Krishno_MD_KUET_CSE
t = int(input())
while t>0:
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    v,x,g,m = False,-1,0,float('inf')
    for i in range(n):
        if b[i]>a[i]:
            if x != -1:
                v = True
            x,g = i,b[i]-a[i]
        else:
            m = min(m,a[i]-b[i])
    if v:
        print("NO")
    else:
        print("YES" if g<=m else "NO")
    t -= 1
