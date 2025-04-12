# 315080427	      Apr/12/2025 10:51UTC+6	      Krishno_MD	      1917B - Erase First or Second Letter	      PyPy 3-64	      Accepted	      156 ms	      3400 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    s = input()
    st = set()
    a = 0
    for c in s:
        st.add(c)
        a += len(st)
    print(a)
