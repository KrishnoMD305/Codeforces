# 316101700	        Apr/18/2025 19:53UTC+6	        Krishno_MD	        1850E - Cardboard for Pictures	        PyPy 3-64	        Accepted	        281 ms	        20900 KB

from itertools import accumulate
# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,c = map(int,input().split())
    v = list(map(int,input().split()))
    ans,w_min,w_max = -1,1,1e9
    while w_min<=w_max:
        mid,tot = int((w_max+w_min)/2), 0
        tot = next((s for s in accumulate((i+2*mid)**2 for i in v) if s>c), sum((i+2*mid)**2 for i in v))
        if tot == c: ans = mid; break
        w_max, w_min = (mid - 1, w_min) if tot > c else (w_max, mid + 1)
    print(ans)
