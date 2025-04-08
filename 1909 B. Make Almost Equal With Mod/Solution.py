# 314437601	      Apr/08/2025 08:56UTC+6	      Krishno_MD	      1909B - Make Almost Equal With Mod	      PyPy 3-64	      Accepted	      171 ms	      3400 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    v = list(map(int,input().split()))
    r = 2
    while True:
        m = set()
        for i in v:
            m.add(i%r)
        if len(m)==2:
            break
        r *= 2
    print(r)
