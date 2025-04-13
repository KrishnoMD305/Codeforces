# 315237359	        Apr/13/2025 11:18UTC+6	        Krishno_MD	        1904B - Collecting Game	        PyPy 3-64	        Accepted	        342 ms	        19300 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    v = list(map(int,input().split()))
    vp = [(v[i],i) for i in range(n)]
    vp.sort()
    prefix_s=[0]*n
    prefix_s[0] = vp[0][0]
    for i in range(1,n):
        prefix_s[i] = prefix_s[i-1]+vp[i][0]
    a = [-1]*n
    d = []
    for i in range(n):
        d.append(vp[i][1])
        if i==n-1 or vp[i+1][0]>prefix_s[i]:
            while d:
                a[d[-1]]=i
                d.pop()
    for i in a:
        print(i,end=" ")
    print()
