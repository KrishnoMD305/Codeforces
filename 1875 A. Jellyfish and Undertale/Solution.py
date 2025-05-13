# 319489876	        May/13/2025 15:41UTC+6	        Krishno_MD	        1875A - Jellyfish and Undertale	        PyPy 3-64	        Accepted	        187 ms	        6000 KB

# Krishno_Mondol_KUET_CSE
def solve():
    a,b,n = map(int,input().split())
    v = list(map(int,input().split()))
    s = 0 if b==1 else b-1
    for i in v: s += (i if i+1<=a else (a-1))
    print(s+1)

t = int(input())
for i in range(t):
    solve()
