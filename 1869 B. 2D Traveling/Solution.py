# 316040354	        Apr/18/2025 10:50UTC+6	        Krishno_MD	        1869B - 2D Traveling	        PyPy 3-64	        Accepted	        718 ms	1        9100 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,k,a,b = map(int,input().split())
    x,y = [0]*(n+1),[0]*(n+1)
    for i in range(1,n+1):
        x[i],y[i] = map(int,input().split())
    direct_price,min_a,min_b = abs(x[a]-x[b])+abs(y[a]-y[b]),float("inf"),float("inf")
    for i in range(1,k+1):
        min_a = min(min_a,abs(x[a]-x[i])+abs(y[a]-y[i]))
        min_b = min(min_b,abs(x[b]-x[i])+abs(y[b]-y[i]))
    print(min(direct_price,min_a+min_b))
