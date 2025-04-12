# 315080471	      Apr/12/2025 10:52UTC+6	      Krishno_MD	      1917B - Erase First or Second Letter	      PyPy 3-64	      Accepted	      218 ms	      6000 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    s = input()
    st,a = set(),0
    print(sum(len(st := st|{c}) for c in s))
