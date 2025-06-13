# 323981452
# Krishno_Mondol_KUET_CSE
from collections import Counter
import string
def solve(): 
    s1,s2 = map(str,input().split())
    ans = ""
    cnt = Counter(s2)
    fr = {ch:cnt[ch] for ch in string.ascii_uppercase}
    for ch in s1[::-1]:
        if fr[ch]:
            ans += ch
            fr[ch] -= 1
    print("YES" if ans[::-1]==s2 else "NO")
  
t = int(input())
for i in range(t):
    solve()
