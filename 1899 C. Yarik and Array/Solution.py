# 315287009	        Apr/13/2025 18:27UTC+6	        Krishno_MD	        1899C - Yarik and Array	        PyPy 3-64	        Accepted	        202 ms	        18500 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    v = list(map(int,input().split()))
    a,s = v[0],v[0]
    for i in range(1,n):
        if s<0:
            s=0
        if (v[i]%2!=0 and v[i-1]%2==0) or (v[i]%2==0 and v[i-1]%2!=0):
            s += v[i]
        else:
            s = v[i]
        a = max(a,s)
    print(a)
